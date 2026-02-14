class Templates {
    class Vanilla_Base; //import Vanilla_Base from A3A to use with defining a new vanilla template

    class 5R_BAF_Custom : Vanilla_Base
    {
        basepath = QPATHTOFOLDER(Templates\Vanilla); //the path to the folder the template is located in, this translates to "\x\A3AE\addons\templates\Templates\Vanilla"
        side = "Inv"; //the side the faction defaults to, one of the following: Inv, Occ, Reb, Civ
        flagTexture = "\A3\Data_F\Flags\flag_uk_CO.paa"; //path to an icon to be displayed in the selector
        name = "5R BAF"; //the name shown in the selector
        file = "5R_AI_BAF"; //the template file name
        maps[] = {}; //if this template should be prioritized on any maps (case sensetive to worldName)
        climate[] = {"arid", "arctic"}; //climate that the template is meant for
    };
};
