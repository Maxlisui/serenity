#pragma once

namespace Liza8x10 {

static constexpr char first_glyph = '!';
static constexpr char last_glyph = '~';
static constexpr byte glyph_width = 8;
static constexpr byte glyph_height = 10;

static constexpr const char* glyphs[] {

    "   ##   "
    "   ##   "
    "   ##   "
    "   ##   "
    "   ##   "
    "   ##   "
    "        "
    "   ##   "
    "   ##   "
    "        ",

    " ## ##  "
    " ## ##  "
    " #  #   "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "  #  #  "
    "  #  #  "
    " ###### "
    "  #  #  "
    "  #  #  "
    "  #  #  "
    " ###### "
    "  #  #  "
    "  #  #  ",

    "        "
    "     #  "
    "  ####  "
    " #  # # "
    " #  #   "
    "  ####  "
    "   #  # "
    " # #  # "
    "  ####  "
    "  #     ",

    "        "
    " ##   # "
    " ##  ## "
    "    ##  "
    "   ##   "
    "  ##    "
    " ##  ## "
    " #   ## "
    "        "
    "        ",

    "        "
    "   ##   "
    "  #  #  "
    "  #  #  "
    "  ###   "
    " #   #  "
    " #   # #"
    " #   ## "
    "  ###  #"
    "        ",

    "   ##   "
    "   ##   "
    "   #    "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "    #   "
    "   #    "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "   #    "
    "    #   "
    "        ",

    "   #    "
    "    #   "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "    #   "
    "   #    "
    "        ",

    "        "
    "        "
    "        "
    "   #    "
    " #####  "
    "   #    "
    "  # #   "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "   #    "
    "   #    "
    " #####  "
    "   #    "
    "   #    "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "    ##  "
    "   ##   "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    " #####  "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "   ##   "
    "   ##   "
    "        ",

    "        "
    "     #  "
    "     #  "
    "    #   "
    "    #   "
    "   #    "
    "   #    "
    "  #     "
    "  #     "
    "        ",

    "  ####  "
    " #   ## "
    " #  # # "
    " #  # # "
    " # #  # "
    " # #  # "
    " ##   # "
    " ##   # "
    "  ####  "
    "        ",

    "   #    "
    "  ##    "
    " # #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    "     #  "
    "    #   "
    "   #    "
    "  #     "
    " #      "
    " ###### "
    "        ",

    " ###### "
    "     #  "
    "    #   "
    "   #    "
    "  ####  "
    "      # "
    "      # "
    " #    # "
    "  ####  "
    "        ",

    "      # "
    "     ## "
    "    # # "
    "   #  # "
    "  #   # "
    " ###### "
    "      # "
    "      # "
    "      # "
    "        ",

    " ###### "
    " #      "
    " #      "
    " #      "
    " #####  "
    "      # "
    "      # "
    " #    # "
    "  ####  "
    "        ",

    "     ## "
    "   ##   "
    "  #     "
    " #      "
    " #####  "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    " ###### "
    " #    # "
    "      # "
    "     #  "
    "    #   "
    "   #    "
    "  #     "
    "  #     "
    "  #     "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    "  ##### "
    "      # "
    "     #  "
    "   ##   "
    " ##     "
    "        ",

    "        "
    "        "
    "        "
    "   ##   "
    "   ##   "
    "        "
    "   ##   "
    "   ##   "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "    ##  "
    "    ##  "
    "        "
    "    ##  "
    "   ##   "
    "        "
    "        ",

    "        "
    "        "
    "    ##  "
    "   #    "
    "  #     "
    " #      "
    "  #     "
    "   #    "
    "    ##  "
    "        ",

    "        "
    "        "
    "        "
    " ###### "
    "        "
    " ###### "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    " ##     "
    "   #    "
    "    #   "
    "     #  "
    "    #   "
    "   #    "
    " ##     "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    "     #  "
    "    #   "
    "   ##   "
    "        "
    "   ##   "
    "   ##   "
    "        ",

    "  ####  "
    " #    # "
    " #    # "
    " #  ### "
    " # #  # "
    " # #  # "
    " #  ### "
    " #      "
    "  ####  "
    "        ",

    "   ##   "
    "  #  #  "
    " #    # "
    " #    # "
    " ###### "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #####  "
    " #    # "
    " #    # "
    " #    # "
    " #####  "
    "        ",

    "   ###  "
    "  #   # "
    " #      "
    " #      "
    " #      "
    " #      "
    " #      "
    "  #   # "
    "   ###  "
    "        ",

    " ####   "
    " #   #  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #   #  "
    " ####   "
    "        ",

    " ###### "
    " #      "
    " #      "
    " #      "
    " #####  "
    " #      "
    " #      "
    " #      "
    " ###### "
    "        ",

    " ###### "
    " #      "
    " #      "
    " #      "
    " ####   "
    " #      "
    " #      "
    " #      "
    " #      "
    "        ",

    "   ###  "
    "  #   # "
    " #      "
    " #      "
    " #   ## "
    " #    # "
    " #    # "
    "  #   # "
    "   ###  "
    "        ",

    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " ###### "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "        ",

    "  ####  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    " #   #  "
    "  ###   "
    "        ",

    " #    # "
    " #   #  "
    " #  #   "
    " #  #   "
    " ###    "
    " #  #   "
    " #  #   "
    " #   #  "
    " #    # "
    "        ",

    " #      "
    " #      "
    " #      "
    " #      "
    " #      "
    " #      "
    " #      "
    " #      "
    " ###### "
    "        ",

    " #    # "
    " ##  ## "
    " # ## # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    " #    # "
    " #    # "
    " ##   # "
    " # #  # "
    " #  # # "
    " #   ## "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "   ###  "
    "  #   # "
    " #     #"
    " #     #"
    " #     #"
    " #     #"
    " #     #"
    "  #   # "
    "   ###  "
    "        ",

    " #####  "
    " #    # "
    " #    # "
    " #####  "
    " #      "
    " #      "
    " #      "
    " #      "
    " #      "
    "        ",

    "   ###  "
    "  #   # "
    " #     #"
    " #     #"
    " #     #"
    " #     #"
    " #   # #"
    "  #   # "
    "   ### #"
    "        ",

    "  ####  "
    "  #   # "
    "  #   # "
    "  #   # "
    "  ####  "
    "  # #   "
    "  #  #  "
    "  #   # "
    "  #    #"
    "        ",

    "   ##   "
    "  #  #  "
    " #    # "
    "  #     "
    "   ##   "
    "     #  "
    " #    # "
    "  #  #  "
    "   ##   "
    "        ",

    "####### "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "        ",

    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  #  #  "
    "   ##   "
    "        ",

    " #   #  "
    " #   #  "
    " #   #  "
    " #   #  "
    "  # #   "
    "  # #   "
    "  # #   "
    "   #    "
    "   #    "
    "        ",

    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    " # ## # "
    " ##  ## "
    " #    # "
    "        ",

    "#     # "
    " #   #  "
    "  # #   "
    "  # #   "
    "   #    "
    "  # #   "
    "  # #   "
    " #   #  "
    "#     # "
    "        ",

    "#     # "
    " #   #  "
    "  # #   "
    "  # #   "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "        ",

    " ###### "
    "      # "
    "     #  "
    "    #   "
    "   #    "
    "  #     "
    " #      "
    " #      "
    " ###### "
    "        ",

    "  ####  "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  #     "
    "  ####  "
    "        ",

    "        "
    " #      "
    " ##     "
    "  ##    "
    "   ##   "
    "    ##  "
    "     ## "
    "      # "
    "        "
    "        ",

    "  ####  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "     #  "
    "  ####  "
    "        ",

    "   #    "
    "  # #   "
    " #   #  "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    " ###### "
    "        ",

    "   ##   "
    "    ##  "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    "      # "
    "  ##### "
    " #    # "
    " #    # "
    "  ##### "
    "        ",

    " #      "
    " #      "
    " #      "
    " ####   "
    " #   #  "
    " #    # "
    " #    # "
    " #   #  "
    " ####   "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " #      "
    " #      "
    " #    # "
    "  ####  "
    "        ",

    "      # "
    "      # "
    "      # "
    "   #### "
    "  #   # "
    " #    # "
    " #    # "
    "  #   # "
    "   #### "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " ###### "
    " #      "
    " #    # "
    "  ####  "
    "        ",

    "        "
    "    ### "
    "   #    "
    "  ####  "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "        ",

    "        "
    "        "
    "        "
    "  ##### "
    " #    # "
    " #    # "
    " #    # "
    "  ##### "
    "      # "
    "  ####  ",

    " #      "
    " #      "
    " #      "
    " ####   "
    " #   #  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "        "
    "    #   "
    "        "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "        ",

    "        "
    "    #   "
    "        "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "  ##    ",

    " #      "
    " #      "
    " #      "
    " #   #  "
    " #  #   "
    " ###    "
    " #  #   "
    " #   #  "
    " #    # "
    "        ",

    "   ##   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "    #   "
    "        ",

    "        "
    "        "
    "        "
    "  ## ## " 
    " #  #  #"
    " #  #  #"
    " #  #  #"
    " #     #"
    " #     #"
    "        ",

    "        "
    "        "
    "        "
    " ####   "
    " #   #  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    " #    # "
    " #    # "
    " #    # "
    "  ####  "
    "        ",

    "        "
    "        "
    "        "
    " ####   "
    " #   #  "
    " #    # "
    " #   #  "
    " ####   "
    " #      "
    " #      ",

    "        "
    "        "
    "        "
    "   #### "
    "  #   # "
    " #    # "
    "  #   # "
    "   #### "
    "      # "
    "      # ",

    "        "
    "        "
    "        "
    " #####  "
    " #    # "
    " #      "
    " #      "
    " #      "
    " #      "
    "        ",

    "        "
    "        "
    "        "
    "  ####  "
    " #    # "
    "  ##    "
    "    ##  "
    " #    # "
    "  ####  "
    "        ",

    "        "
    "   #    "
    "   #    "
    " #####  "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "    ### "
    "        ",

    "        "
    "        "
    "        "
    " #    # " 
    " #    # "
    " #    # "
    " #    # "
    "  #   # "
    "   #### "
    "        ",

    "        "
    "        "
    "        "
    " #     #"
    " #     #"
    " #     #"
    "  #   # "
    "   # #  "
    "    #   "
    "        ",

    "        "
    "        "
    "        " 
    " #  #  #"
    " #  #  #"
    " #  #  #"
    " #  #  #"
    " #  #  #"
    "  ## ## "
    "        ",


    "        "
    "        "
    "        "
    " ##  ## "
    "  #  #  "
    "   ##   "
    "   ##   "
    "  #  #  "
    " ##  ## "
    "        ",

    "        "
    "        "
    "        "
    " #    # "
    " #    # " 
    " #    # "
    "  #   # "
    "   #### "
    "      # "
    "  ####  ",

    "        "
    "        "
    "        "
    " ###### " 
    "     #  "
    "    #   "
    "   #    "
    "  #     "
    " ###### "
    "        ",

    "   #    "
    "  #     "
    "  #     "
    "  #     "
    " #      "
    "  #     "
    "  #     "
    "  #     "
    "   #    "
    "        ",

    "        "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "   #    "
    "        ",

    "  #     "
    "   #    "
    "   #    "
    "   #    "
    "    #   "
    "   #    "
    "   #    "
    "   #    "
    "  #     "
    "        ",

    "        "
    "        "
    "        "
    "        "
    "  ##  # "
    " #  ##  "
    "        "
    "        "
    "        "
    "        ",
};

}

