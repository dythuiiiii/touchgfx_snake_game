/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    game_background_over.setPosition(0, 0, 240, 320);
    game_background_over.setColor(touchgfx::Color::getColorFromRGB(11, 137, 227));
    game_background_over.setVisible(false);
    add(game_background_over);

    on_button.setXY(70, 110);
    on_button.setBitmaps(touchgfx::Bitmap(BITMAP_LO_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_SMALL_OUTLINE_DISABLED_ID));
    on_button.setAction(buttonCallback);
    add(on_button);

    boxProgress1.setXY(20, 151);
    boxProgress1.setProgressIndicatorPosition(0, 0, 200, 18);
    boxProgress1.setRange(0, 127);
    boxProgress1.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    boxProgress1.setBackground(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BOXPROGRESS_THICK_SMALL_ID));
    boxProgress1.setColor(touchgfx::Color::getColorFromRGB(0, 240, 255));
    boxProgress1.setValue(0);
    boxProgress1.setVisible(false);
    add(boxProgress1);

    game_outside.setPosition(0, 0, 240, 320);
    game_outside.setColor(touchgfx::Color::getColorFromRGB(5, 97, 5));
    game_outside.setVisible(false);
    add(game_outside);

    game_background.setBitmap(touchgfx::Bitmap(BITMAP_GAME_BACKGROUND_ID));
    game_background.setPosition(8, 13, 224, 224);
    game_background.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    game_background.setVisible(false);
    add(game_background);

    Score_text.setPosition(42, 253, 152, 36);
    Score_text.setColor(touchgfx::Color::getColorFromRGB(255, 252, 252));
    Score_text.setLinespacing(0);
    Unicode::snprintf(Score_textBuffer, SCORE_TEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_WFE6).getText());
    Score_text.setWildcard(Score_textBuffer);
    Score_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PS0K));
    Score_text.setVisible(false);
    add(Score_text);

    high_score_text.setPosition(42, 286, 152, 36);
    high_score_text.setColor(touchgfx::Color::getColorFromRGB(255, 252, 252));
    high_score_text.setLinespacing(0);
    Unicode::snprintf(high_score_textBuffer, HIGH_SCORE_TEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_470N).getText());
    high_score_text.setWildcard(high_score_textBuffer);
    high_score_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FB17));
    high_score_text.setVisible(false);
    add(high_score_text);

    head_right.setBitmap(touchgfx::Bitmap(BITMAP_HEAD_RIGHT_ID));
    head_right.setPosition(349, 160, 16, 16);
    head_right.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    head_right.setVisible(false);
    add(head_right);

    head_up.setBitmap(touchgfx::Bitmap(BITMAP_HEAD_UP_ID));
    head_up.setPosition(409, 130, 16, 16);
    head_up.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    head_up.setVisible(false);
    add(head_up);

    head_down.setBitmap(touchgfx::Bitmap(BITMAP_HEAD_DOWN_ID));
    head_down.setPosition(325, 130, 16, 16);
    head_down.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    head_down.setVisible(false);
    add(head_down);

    head_left.setBitmap(touchgfx::Bitmap(BITMAP_HEAD_LEFT_ID));
    head_left.setPosition(409, 160, 16, 16);
    head_left.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    head_left.setVisible(false);
    add(head_left);

    food.setBitmap(touchgfx::Bitmap(BITMAP_APPLE_REMOVEBG_PREVIEW___COPY_ID));
    food.setPosition(51, 61, 16, 16);
    food.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    food.setVisible(false);
    add(food);

    right_button.setXY(199, 268);
    right_button.setBitmaps(touchgfx::Bitmap(BITMAP_LEFT_BUTTON_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    right_button.setVisible(false);
    right_button.setAction(buttonCallback);
    add(right_button);

    left_button.setXY(152, 268);
    left_button.setBitmaps(touchgfx::Bitmap(BITMAP_RIGHT_BUTTON_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    left_button.setVisible(false);
    left_button.setAction(buttonCallback);
    add(left_button);

    down_button.setXY(105, 286);
    down_button.setBitmaps(touchgfx::Bitmap(BITMAP_DOWN_BUTTON_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    down_button.setVisible(false);
    down_button.setAction(buttonCallback);
    add(down_button);

    up_button.setXY(105, 253);
    up_button.setBitmaps(touchgfx::Bitmap(BITMAP_UP_BUTTON_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    up_button.setVisible(false);
    up_button.setAction(buttonCallback);
    add(up_button);

    retry.setXY(51, 229);
    retry.setBitmaps(touchgfx::Bitmap(BITMAP_RETRY_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUNDED_INACTIVE_ID));
    retry.setVisible(false);
    retry.setAction(buttonCallback);
    add(retry);

    Exit.setXY(51, 277);
    Exit.setBitmaps(touchgfx::Bitmap(BITMAP_EXIT_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_SMALL_ROUND_PRESSED_ID));
    Exit.setVisible(false);
    Exit.setAction(buttonCallback);
    add(Exit);

    MyContainer.setPosition(0, 0, 247, 271);
    MyContainer.setVisible(false);
    up_box.setPosition(8, 0, 225, 13);
    up_box.setColor(touchgfx::Color::getColorFromRGB(32, 158, 3));
    MyContainer.add(up_box);

    down_box.setPosition(6, 237, 227, 16);
    down_box.setColor(touchgfx::Color::getColorFromRGB(32, 158, 3));
    MyContainer.add(down_box);

    right_box.setPosition(-7, 0, 15, 253);
    right_box.setColor(touchgfx::Color::getColorFromRGB(32, 158, 3));
    MyContainer.add(right_box);

    left_box.setPosition(232, 0, 15, 253);
    left_box.setColor(touchgfx::Color::getColorFromRGB(32, 158, 3));
    MyContainer.add(left_box);

    add(MyContainer);

    food_score_image.setBitmap(touchgfx::Bitmap(BITMAP_APPLE_REMOVEBG_PREVIEW___COPY_ID));
    food_score_image.setPosition(11, 254, 23, 29);
    food_score_image.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    food_score_image.setVisible(false);
    add(food_score_image);

    start_game_snake.setBitmap(touchgfx::Bitmap(BITMAP_SLIDE1_ID));
    start_game_snake.setPosition(0, 0, 240, 320);
    start_game_snake.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    start_game_snake.setVisible(false);
    add(start_game_snake);

    start_button.setXY(48, 115);
    start_button.setBitmaps(touchgfx::Bitmap(BITMAP_PLAY_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_60_TINY_ROUNDED_PRESSED_ID));
    start_button.setVisible(false);
    start_button.setAction(buttonCallback);
    add(start_button);

    setting_button.setXY(6, 276);
    setting_button.setBitmaps(touchgfx::Bitmap(BITMAP_SETTING_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    setting_button.setVisible(false);
    setting_button.setAction(buttonCallback);
    add(setting_button);

    loading_image.setBitmap(touchgfx::Bitmap(BITMAP_LOADING_REMOVEBG_PREVIEW_ID));
    loading_image.setPosition(51, 105, 138, 46);
    loading_image.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    loading_image.setVisible(false);
    add(loading_image);

    setting_screen.setPosition(12, 54, 216, 213);
    setting_screen.setColor(touchgfx::Color::getColorFromRGB(8, 149, 209));
    setting_screen.setVisible(false);
    add(setting_screen);

    home_button.setXY(102, 249);
    home_button.setBitmaps(touchgfx::Bitmap(BITMAP_HOME_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    home_button.setVisible(false);
    home_button.setAction(buttonCallback);
    add(home_button);

    Setting_Container.setPosition(0, 0, 250, 250);
    Setting_Container.setVisible(false);
    collide_text.setXY(24, 182);
    collide_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    collide_text.setLinespacing(0);
    collide_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KPHE));
    Setting_Container.add(collide_text);

    fast_text.setXY(40, 129);
    fast_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    fast_text.setLinespacing(0);
    fast_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G5LM));
    Setting_Container.add(fast_text);

    float_text.setXY(31, 83);
    float_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    float_text.setLinespacing(0);
    float_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0EAQ));
    Setting_Container.add(float_text);

    fast_button.setXY(144, 148);
    fast_button.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_OFF_USE_ID), touchgfx::Bitmap(BITMAP_BUTTON_ON_REMOVEBG_PREVIEW_ID));
    fast_button.setAction(buttonCallback);
    Setting_Container.add(fast_button);

    collide_button.setXY(144, 194);
    collide_button.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_ON_REMOVEBG_PREVIEW_ID), touchgfx::Bitmap(BITMAP_BUTTON_OFF_USE_ID));
    collide_button.setAction(buttonCallback);
    Setting_Container.add(collide_button);

    float_button.setXY(144, 98);
    float_button.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTON_OFF_USE_ID), touchgfx::Bitmap(BITMAP_BUTTON_ON_REMOVEBG_PREVIEW_ID));
    float_button.setAction(buttonCallback);
    Setting_Container.add(float_button);

    add(Setting_Container);

    Block_Collide_Container.setPosition(0, 0, 250, 250);
    Block_Collide_Container.setVisible(false);
    Block_Collide_Screen.setPosition(24, 80, 190, 161);
    Block_Collide_Screen.setColor(touchgfx::Color::getColorFromRGB(27, 118, 245));
    Block_Collide_Container.add(Block_Collide_Screen);

    Block_Collide_Text.setXY(36, 121);
    Block_Collide_Text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Block_Collide_Text.setLinespacing(0);
    Block_Collide_Text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P8E1));
    Block_Collide_Container.add(Block_Collide_Text);

    add(Block_Collide_Container);

    Block_Collide_Button.setXY(103, 223);
    Block_Collide_Button.setBitmaps(touchgfx::Bitmap(BITMAP_X_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    Block_Collide_Button.setVisible(false);
    Block_Collide_Button.setAction(buttonCallback);
    add(Block_Collide_Button);

    Block_Float_Container.setPosition(0, 0, 250, 250);
    Block_Float_Container.setVisible(false);
    Block_Float_Screen.setPosition(24, 80, 190, 161);
    Block_Float_Screen.setColor(touchgfx::Color::getColorFromRGB(27, 118, 245));
    Block_Float_Container.add(Block_Float_Screen);

    Block_Float_Text.setXY(36, 121);
    Block_Float_Text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Block_Float_Text.setLinespacing(0);
    Block_Float_Text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_U6MP));
    Block_Float_Container.add(Block_Float_Text);

    add(Block_Float_Container);

    Block_Float_Button.setXY(103, 223);
    Block_Float_Button.setBitmaps(touchgfx::Bitmap(BITMAP_X_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    Block_Float_Button.setVisible(false);
    Block_Float_Button.setAction(buttonCallback);
    add(Block_Float_Button);

    food_game_over.setBitmap(touchgfx::Bitmap(BITMAP_APPLE_REMOVEBG_PREVIEW___COPY_ID));
    food_game_over.setPosition(76, 127, 44, 45);
    food_game_over.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    food_game_over.setVisible(false);
    add(food_game_over);

    score_game_over_text.setPosition(138, 131, 127, 36);
    score_game_over_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    score_game_over_text.setLinespacing(0);
    Unicode::snprintf(score_game_over_textBuffer, SCORE_GAME_OVER_TEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_QPMV).getText());
    score_game_over_text.setWildcard(score_game_over_textBuffer);
    score_game_over_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UTXT));
    score_game_over_text.setVisible(false);
    add(score_game_over_text);

    high_score_game_over_text.setPosition(138, 182, 113, 31);
    high_score_game_over_text.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    high_score_game_over_text.setLinespacing(0);
    Unicode::snprintf(high_score_game_over_textBuffer, HIGH_SCORE_GAME_OVER_TEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_3EEL).getText());
    high_score_game_over_text.setWildcard(high_score_game_over_textBuffer);
    high_score_game_over_text.setTypedText(touchgfx::TypedText(T___SINGLEUSE_H6UW));
    high_score_game_over_text.setVisible(false);
    add(high_score_game_over_text);

    exit_home.setXY(198, 277);
    exit_home.setBitmaps(touchgfx::Bitmap(BITMAP_X_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_MICRO_OUTLINE_PRESSED_ID));
    exit_home.setVisible(false);
    exit_home.setAction(buttonCallback);
    add(exit_home);

    setting_label_image.setBitmap(touchgfx::Bitmap(BITMAP_SETTINGS_ID));
    setting_label_image.setPosition(57, 35, 127, 57);
    setting_label_image.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    setting_label_image.setVisible(false);
    add(setting_label_image);

    error_label_image.setBitmap(touchgfx::Bitmap(BITMAP_ERROR_ID));
    error_label_image.setPosition(66, 62, 107, 48);
    error_label_image.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    error_label_image.setVisible(false);
    add(error_label_image);

    high_score_game_over.setBitmap(touchgfx::Bitmap(BITMAP_CUP_ID));
    high_score_game_over.setPosition(83, 184, 31, 33);
    high_score_game_over.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    high_score_game_over.setVisible(false);
    add(high_score_game_over);

    high_score_image.setBitmap(touchgfx::Bitmap(BITMAP_CUP_ID));
    high_score_image.setPosition(11, 289, 23, 22);
    high_score_image.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    high_score_image.setVisible(false);
    add(high_score_image);

    game_over.setXY(8, 32);
    game_over.setColor(touchgfx::Color::getColorFromRGB(250, 179, 15));
    game_over.setLinespacing(0);
    game_over.setTypedText(touchgfx::TypedText(T___SINGLEUSE_205P));
    game_over.setVisible(false);
    add(game_over);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &on_button)
    {
        //Hide_button
        //When on_button clicked hide on_button
        //Hide on_button
        on_button.setVisible(false);
        on_button.invalidate();
        //ShowBoxProgress
        //When on_button clicked show boxProgress1
        //Show boxProgress1
        boxProgress1.setVisible(true);
        boxProgress1.invalidate();
        //ShowLoading
        //When on_button clicked show loading_image
        //Show loading_image
        loading_image.setVisible(true);
        loading_image.invalidate();
    }
    if (&src == &start_button)
    {
        //SetUpScreen
        //When start_button clicked call virtual function
        //Call BoxBorder
        BoxBorder();
        //Hide_start_button
        //When start_button clicked hide start_button
        //Hide start_button
        start_button.setVisible(false);
        start_button.invalidate();
    }
    if (&src == &up_button)
    {
        //Up_Button_Handler
        //When up_button clicked call virtual function
        //Call Up_Button_Click
        Up_Button_Click();
    }
    if (&src == &down_button)
    {
        //Down_Button_Handler
        //When down_button clicked call virtual function
        //Call Down_Button_Click
        Down_Button_Click();
    }
    if (&src == &left_button)
    {
        //Left_Button_Handler
        //When left_button clicked call virtual function
        //Call Left_Button_Click
        Left_Button_Click();
    }
    if (&src == &right_button)
    {
        //Right_Button_Handler
        //When right_button clicked call virtual function
        //Call Right_Button_Click
        Right_Button_Click();
    }
    if (&src == &retry)
    {
        //Retry_Handle
        //When retry clicked call virtual function
        //Call Retry_Function
        Retry_Function();
    }
    if (&src == &Exit)
    {
        //Exit_Handle
        //When Exit clicked call virtual function
        //Call Exit_Function
        Exit_Function();
    }
    if (&src == &setting_button)
    {
        //SettingButtonHandle
        //When setting_button clicked call virtual function
        //Call Setting_Button_Click
        Setting_Button_Click();
    }
    if (&src == &Block_Collide_Button)
    {
        //BlockCollideHandle
        //When Block_Collide_Button clicked call virtual function
        //Call Block_Collide_Button_Click
        Block_Collide_Button_Click();
    }
    if (&src == &float_button)
    {
        //FloatButtonHandle
        //When float_button clicked call virtual function
        //Call Float_Button_Click
        Float_Button_Click();
    }
    if (&src == &collide_button)
    {
        //CollideButtonHandle
        //When collide_button clicked call virtual function
        //Call Collide_Button_Click
        Collide_Button_Click();
    }
    if (&src == &fast_button)
    {
        //FastButtonHandle
        //When fast_button clicked call virtual function
        //Call Fast_Button_Click
        Fast_Button_Click();
    }
    if (&src == &Block_Float_Button)
    {
        //Block_Float_Handle
        //When Block_Float_Button clicked call virtual function
        //Call Block_Float_Button_Click
        Block_Float_Button_Click();
    }
    if (&src == &home_button)
    {
        //Home_Button_Click
        //When home_button clicked call virtual function
        //Call Home_Button_Click
        Home_Button_Click();
    }
    if (&src == &exit_home)
    {
        //Exit_Home_Handle
        //When exit_home clicked call virtual function
        //Call Exit_Home_Click
        Exit_Home_Click();
    }
}
