#pragma once
#include "types.h"
namespace Mod_Hub_Base::UserInterface
{
	enum class Font : std::int32_t
	{
		ChaletLondon = 0,
		HouseScript = 1,
		Monospace = 2,
		Wingdings = 3,
		ChaletComprimeCologne = 4,
		Pricedown = 7
	};

	enum class HeaderType : std::int32_t
	{
		Static = 0,
		Gradient = 1,
		Game_YTD = 2,
		YTD = 3
	};

	struct Rectangle
	{
		Vector2 m_Center;
		Vector2 m_Size;

		bool IsInBounds(Vector2 point)
		{
			auto left = m_Center.x - (m_Size.x / 2.f);
			auto right = m_Center.x + (m_Size.x / 2.f);
			auto top = m_Center.y + (m_Size.y / 2.f);
			auto bottom = m_Center.y - (m_Size.y / 2.f);

			if (point.x > right || point.x < left)
				return false;
			if (point.y > top || point.y < bottom)
				return false;

			return true;
		}
	};

	class UIManager
	{
	public:
		explicit UIManager() = default;
		~UIManager() noexcept = default;
		UIManager(UIManager const&) = delete;
		UIManager(UIManager&&) = delete;
		UIManager& operator=(UIManager const&) = delete;
		UIManager& operator=(UIManager&&) = delete;

		template <typename SubmenuType, typename ...TArgs>
		void AddSubmenu(TArgs&&... args)
		{
			auto sub = std::make_unique<SubmenuType>(std::forward<TArgs>(args)...);
			if (m_SubmenuStack.empty())
			{
				m_SubmenuStack.push(sub.get());
			}

			m_AllSubmenus.push_back(std::move(sub));
		}

		void SwitchToSubmenu(std::uint32_t id)
		{
			for (auto&& sub : m_AllSubmenus)
			{
				if (sub->GetId() == id)
				{
					m_SubmenuStack.push(sub.get());
					return;
				}
			}
		}

		void OnTick();
	public:
		std::mutex m_Mutex;

		bool m_Opened = false;
		bool m_MouseLocked = false;
		float m_PosX = 0.82f;
		float m_PosY = 0.10f;
		float m_Width = 0.24f;
		std::size_t m_OptionsPerPage = 11;
		bool m_Sounds = true;
		bool m_Controllerinput = false;

		// Input
		std::int32_t m_OpenDelay = 200;
		std::int32_t m_BackDelay = 300;
		std::int32_t m_EnterDelay = 300;
		std::int32_t m_VerticalDelay = 150;
		std::int32_t m_HorizontalDelay = 120;

		// Header
		float m_HeaderHeight = 0.100f;
		bool m_HeaderText = false;
		bool Rainbowmenu_titleBool = false;
		float m_HeaderTextSize = 1.f;
		Font m_HeaderFont = Font::Pricedown;
		Color m_HeaderBackgroundColor{ 17, 17, 17, 255 };
		Color m_HeaderTextColor{ 255, 255, 255, 255 };
		HeaderType m_HeaderType = HeaderType::YTD;

		bool m_HeaderGradientTransparent = false;
		bool m_HeaderGradientFlip = false;
		float m_HeaderGradientStretch = 0.f;
		float m_HeaderGradientFiller = 0.f;
		Color m_HeaderGradientColorLeft{ 255, 255, 255, 255 };
		Color m_HeaderGradientColorRight{ 255, 255, 255, 30 };

		// Submenu bar
		float m_SubmenuBarHeight = 0.030f;
		float m_SubmenuBarTextSize = 0.30f;
		Font m_SubmenuBarFont = Font::ChaletLondon;
		float m_SubmenuBarPadding = 2.1f;
		Color m_SubmenuBarBackgroundColor{ 0, 123, 255, 255 };
		Color m_SubmenuBarTextColor{ 255,255,255,255 };

		// Options
		float m_OptionHeight = 0.034f;
		float m_OptionTextSize = 0.26f;
		Font m_OptionFont = Font::ChaletLondon;
		float m_OptionPadding = 2.1f;
		Color m_OptionSelectedTextColor{ 255,255,255,255 };
		Color m_OptionUnselectedTextColor{ 255,255,255,255 };
		Color m_OptionSelectedBackgroundColor{ 0, 84, 175, 255 };
		Color m_OptionUnselectedBackgroundColor{ 0, 52, 109, 255 };
		Color m_OptionNOTHING{ 0, 0, 0, 0 };

		// Toggle / bool
		bool Toggle_RainbowBool = false;
		Color m_Toggle_On{ 130,214,157,255 };
		Color m_Toggle_Off{ 200,55,80,255 };

		// Footer
		float m_FooterHeight = 0.030f;
		float m_FooterSpriteSize = 0.028f;
		Color m_FooterBackgroundColor{ 0, 123, 255, 255 };
		Color m_FooterSpriteColor{ 255,255,255,255 };

		// Description
		float m_DescriptionHeightPadding = 0.01f;
		float m_DescriptionHeight = 0.033f;
		float m_DescriptionTextSize = 0.23f;
		Font m_DescriptionFont = Font::ChaletLondon;
		Color m_DescriptionBackgroundColor{ 0, 0, 0, 120 };
		Color m_DescriptionTextColor{ 255, 255, 255, 255 };
		float m_DescriptionSpriteSize = 0.025f;
		float m_DescriptionPadding = 2.1f;
		Color m_DescriptionSpriteColor{ 255, 255, 255, 255 };

		// Overlay
		float m_OverlayX = 0.08f;
		float m_OverlayY = 0.03f;
		float m_OverlayHeight = 0.030f;
		float m_OverlayLineHeight = 0.0035f;
		float m_OverlayPadding = 2.1f;
		float m_OverlayWidth = 0.14f;
		Color m_OverlayColor{ 0, 52, 109, 255 };
		Color m_OverlayTextColor{ 255,255,255,255 };
		Color m_OverlayLineColor{ 0, 123, 255, 255 };
	private:
		bool m_OpenKeyPressed = false;
		bool m_BackKeyPressed = false;
		bool m_EnterKeyPressed = false;
		bool m_UpKeyPressed = false;
		bool m_DownKeyPressed = false;
		bool m_LeftKeyPressed = false;
		bool m_RightKeyPressed = false;
		void CheckForInput();
		void HandleInput();
		void ResetInput();

		float m_DrawBaseY{};
		void DrawHeader();
		void Rainbow_Title();
		void DrawSubmenuBar(AbstractSubmenu* sub);
		void Toggle_Rainbow();
		void DrawOption(AbstractOption* opt, bool selected, AbstractSubmenu& sub, bool editableVersion);
		void DrawFooter(AbstractSubmenu* sub);
		void DrawOverlay();
		void DrawDescription();

		void DrawRect(float x, float y, float width, float height, Color color);
		void DrawSprite(const char* dict, const char* texture, float x, float y, float width, float height, Color color, float rotation);
		void DrawLeftText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		void DrawCenteredText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		void DrawRightText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		float GetTextHeight(Font font, float size);
		Vector2 GetSpriteScale(float size);
		Vector2 GetTextScale(const char* text);

		bool IsMouseLocked();
		Rectangle GetMenuRect();
		Vector2 GetMousePos();

		std::vector<std::unique_ptr<AbstractSubmenu>> m_AllSubmenus;
		std::stack<AbstractSubmenu*, std::vector<AbstractSubmenu*>> m_SubmenuStack;
	};
}

namespace Mod_Hub_Base
{
	inline std::unique_ptr<UserInterface::UIManager> g_UiManager;
}
