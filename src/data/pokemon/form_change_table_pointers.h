const struct FormChange *const gFormChangeTablePointers[NUM_SPECIES] =
{
    [SPECIES_KAZEIYAGA] = sKazeiyagaFormChangeTable,
    [SPECIES_KAZEIYAGA_MEGA] = sKazeiyagaFormChangeTable,
    [SPECIES_SOLADOR] = sSoladorFormChangeTable,
    [SPECIES_SOLADOR_MEGA_X] = sSoladorFormChangeTable,
    [SPECIES_SOLADOR_MEGA_Y] = sSoladorFormChangeTable,
    [SPECIES_LEVIAMAWL] = sLeviamawlFormChangeTable,
    [SPECIES_LEVIAMAWL_MEGA] = sLeviamawlFormChangeTable,
    [SPECIES_COATTAIL] = sCoattailFormChangeTable,
    [SPECIES_COATTAIL_MEGA] = sCoattailFormChangeTable,
    [SPECIES_ROADILLO] = sRoadilloFormChangeTable,
    [SPECIES_ROADILLO_MEGA] = sRoadilloFormChangeTable,
    [SPECIES_ALAKAZAM] = sAlakazamFormChangeTable,
    [SPECIES_ALAKAZAM_MEGA] = sAlakazamFormChangeTable,
    [SPECIES_SLOWBRO] = sSlowbroFormChangeTable,
    [SPECIES_SLOWBRO_MEGA] = sSlowbroFormChangeTable,
    [SPECIES_GENGAR] = sGengarFormChangeTable,
    [SPECIES_GENGAR_MEGA] = sGengarFormChangeTable,
    [SPECIES_KANGASKHAN] = sKangaskhanFormChangeTable,
    [SPECIES_KANGASKHAN_MEGA] = sKangaskhanFormChangeTable,
    [SPECIES_PINSIR] = sPinsirFormChangeTable,
    [SPECIES_PINSIR_MEGA] = sPinsirFormChangeTable,
    [SPECIES_GYARADOS] = sGyaradosFormChangeTable,
    [SPECIES_GYARADOS_MEGA] = sGyaradosFormChangeTable,
    [SPECIES_AERODACTYL] = sAerodactylFormChangeTable,
    [SPECIES_AERODACTYL_MEGA] = sAerodactylFormChangeTable,
    [SPECIES_MEWTWO] = sMewtwoFormChangeTable,
    [SPECIES_MEWTWO_MEGA_X] = sMewtwoFormChangeTable,
    [SPECIES_MEWTWO_MEGA_Y] = sMewtwoFormChangeTable,
    [SPECIES_AMPHAROS] = sAmpharosFormChangeTable,
    [SPECIES_AMPHAROS_MEGA] = sAmpharosFormChangeTable,
    [SPECIES_STEELIX] = sSteelixFormChangeTable,
    [SPECIES_STEELIX_MEGA] = sSteelixFormChangeTable,
    [SPECIES_SCIZOR] = sScizorFormChangeTable,
    [SPECIES_SCIZOR_MEGA] = sScizorFormChangeTable,
    [SPECIES_HERACROSS] = sHeracrossFormChangeTable,
    [SPECIES_HERACROSS_MEGA] = sHeracrossFormChangeTable,
    [SPECIES_HOUNDOOM] = sHoundoomFormChangeTable,
    [SPECIES_HOUNDOOM_MEGA] = sHoundoomFormChangeTable,
    [SPECIES_TYRANITAR] = sTyranitarFormChangeTable,
    [SPECIES_TYRANITAR_MEGA] = sTyranitarFormChangeTable,
    [SPECIES_SCEPTILE] = sSceptileFormChangeTable,
    [SPECIES_SCEPTILE_MEGA] = sSceptileFormChangeTable,
    [SPECIES_BLAZIKEN] = sBlazikenFormChangeTable,
    [SPECIES_BLAZIKEN_MEGA] = sBlazikenFormChangeTable,
    [SPECIES_SWAMPERT] = sSwampertFormChangeTable,
    [SPECIES_SWAMPERT_MEGA] = sSwampertFormChangeTable,
    [SPECIES_SABLEYE] = sSableyeFormChangeTable,
    [SPECIES_SABLEYE_MEGA] = sSableyeFormChangeTable,
    [SPECIES_SHARPEDO] = sSharpedoFormChangeTable,
    [SPECIES_SHARPEDO_MEGA] = sSharpedoFormChangeTable,
    [SPECIES_MANECTRIC] = sManectricFormChangeTable,
    [SPECIES_MANECTRIC_MEGA] = sManectricFormChangeTable,
    [SPECIES_CAMERUPT] = sCameruptFormChangeTable,
    [SPECIES_CAMERUPT_MEGA] = sCameruptFormChangeTable,
    [SPECIES_GLALIE] = sGlalieFormChangeTable,
    [SPECIES_GLALIE_MEGA] = sGlalieFormChangeTable,
    [SPECIES_MAWILE] = sMawileFormChangeTable,
    [SPECIES_MAWILE_MEGA] = sMawileFormChangeTable,
    [SPECIES_MEDICHAM] = sMedichamFormChangeTable,
    [SPECIES_MEDICHAM_MEGA] = sMedichamFormChangeTable,
    [SPECIES_ALTARIA] = sAltariaFormChangeTable,
    [SPECIES_ALTARIA_MEGA] = sAltariaFormChangeTable,
    [SPECIES_ABSOL] = sAbsolFormChangeTable,
    [SPECIES_ABSOL_MEGA] = sAbsolFormChangeTable,
    [SPECIES_CASTFORM] = sCastformFormChangeTable,
    [SPECIES_CASTFORM_SUNNY] = sCastformFormChangeTable,
    [SPECIES_CASTFORM_RAINY] = sCastformFormChangeTable,
    [SPECIES_CASTFORM_SNOWY] = sCastformFormChangeTable,
    [SPECIES_BANETTE] = sBanetteFormChangeTable,
    [SPECIES_BANETTE_MEGA] = sBanetteFormChangeTable,
    [SPECIES_AGGRON] = sAggronFormChangeTable,
    [SPECIES_AGGRON_MEGA] = sAggronFormChangeTable,
    [SPECIES_GARDEVOIR] = sGardevoirFormChangeTable,
    [SPECIES_GARDEVOIR_MEGA] = sGardevoirFormChangeTable,
    [SPECIES_SALAMENCE] = sSalamenceFormChangeTable,
    [SPECIES_SALAMENCE_MEGA] = sSalamenceFormChangeTable,
    [SPECIES_METAGROSS] = sMetagrossFormChangeTable,
    [SPECIES_METAGROSS_MEGA] = sMetagrossFormChangeTable,
    [SPECIES_LATIAS] = sLatiasFormChangeTable,
    [SPECIES_LATIAS_MEGA] = sLatiasFormChangeTable,
    [SPECIES_LATIOS] = sLatiosFormChangeTable,
    [SPECIES_LATIOS_MEGA] = sLatiosFormChangeTable,
    [SPECIES_KYOGRE] = sKyogreFormChangeTable,
    [SPECIES_KYOGRE_PRIMAL] = sKyogreFormChangeTable,
    [SPECIES_GROUDON] = sGroudonFormChangeTable,
    [SPECIES_GROUDON_PRIMAL] = sGroudonFormChangeTable,
    [SPECIES_RAYQUAZA] = sRayquazaFormChangeTable,
    [SPECIES_RAYQUAZA_MEGA] = sRayquazaFormChangeTable,
#if P_GEN_4_POKEMON == TRUE
    [SPECIES_BURMY] = sBurmyFormChangeTable,
    [SPECIES_BURMY_SANDY_CLOAK] = sBurmyFormChangeTable,
    [SPECIES_BURMY_TRASH_CLOAK] = sBurmyFormChangeTable,
    [SPECIES_CHERRIM] = sCherrimFormChangeTable,
    [SPECIES_CHERRIM_SUNSHINE] = sCherrimFormChangeTable,
    [SPECIES_LOPUNNY] = sLopunnyFormChangeTable,
    [SPECIES_LOPUNNY_MEGA] = sLopunnyFormChangeTable,
    [SPECIES_GARCHOMP] = sGarchompFormChangeTable,
    [SPECIES_GARCHOMP_MEGA] = sGarchompFormChangeTable,
    [SPECIES_LUCARIO] = sLucarioFormChangeTable,
    [SPECIES_LUCARIO_MEGA] = sLucarioFormChangeTable,
    [SPECIES_ABOMASNOW] = sAbomasnowFormChangeTable,
    [SPECIES_ABOMASNOW_MEGA] = sAbomasnowFormChangeTable,
    [SPECIES_GALLADE] = sGalladeFormChangeTable,
    [SPECIES_GALLADE_MEGA] = sGalladeFormChangeTable,
    [SPECIES_GIRATINA] = sGiratinaFormChangeTable,
    [SPECIES_GIRATINA_ORIGIN] = sGiratinaFormChangeTable,
    [SPECIES_SHAYMIN] = sShayminFormChangeTable,
    [SPECIES_SHAYMIN_SKY] = sShayminFormChangeTable,
    [SPECIES_ARCEUS] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_FIGHTING] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_FLYING] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_POISON] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_ROCK] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_GROUND] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_BUG] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_GHOST] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_STEEL] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_FIRE] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_WATER] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_GRASS] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_ELECTRIC] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_PSYCHIC] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_ICE] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_DRAGON] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_DARK] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_FAIRY] = sArceusFormChangeTable,
#endif
#if P_GEN_5_POKEMON == TRUE
    [SPECIES_AUDINO] = sAudinoFormChangeTable,
    [SPECIES_AUDINO_MEGA] = sAudinoFormChangeTable,
    [SPECIES_DARMANITAN] = sDarmanitanFormChangeTable,
    [SPECIES_DARMANITAN_ZEN_MODE] = sDarmanitanFormChangeTable,
    [SPECIES_DARMANITAN_GALARIAN] = sDarmanitanGalarianFormChangeTable,
    [SPECIES_DARMANITAN_ZEN_MODE_GALARIAN] = sDarmanitanGalarianFormChangeTable,
    [SPECIES_TORNADUS] = sTornadusFormChangeTable,
    [SPECIES_TORNADUS_THERIAN] = sTornadusFormChangeTable,
    [SPECIES_THUNDURUS] = sThundurusFormChangeTable,
    [SPECIES_THUNDURUS_THERIAN] = sThundurusFormChangeTable,
    [SPECIES_LANDORUS] = sLandorusFormChangeTable,
    [SPECIES_LANDORUS_THERIAN] = sLandorusFormChangeTable,
    [SPECIES_KELDEO] = sKeldeoFormChangeTable,
    [SPECIES_KELDEO_RESOLUTE] = sKeldeoFormChangeTable,
    [SPECIES_MELOETTA] = sMeloettaFormChangeTable,
    [SPECIES_MELOETTA_PIROUETTE] = sMeloettaFormChangeTable,
    [SPECIES_GENESECT] = sGenesectFormChangeTable,
    [SPECIES_GENESECT_DOUSE_DRIVE] = sGenesectFormChangeTable,
    [SPECIES_GENESECT_SHOCK_DRIVE] = sGenesectFormChangeTable,
    [SPECIES_GENESECT_BURN_DRIVE] = sGenesectFormChangeTable,
    [SPECIES_GENESECT_CHILL_DRIVE] = sGenesectFormChangeTable,
#endif
#if P_GEN_6_POKEMON == TRUE
    [SPECIES_GRENINJA_BATTLE_BOND] = sGreninjaBattleBondFormChangeTable,
    [SPECIES_GRENINJA_ASH] = sGreninjaBattleBondFormChangeTable,
    [SPECIES_AEGISLASH] = sAegislashFormChangeTable,
    [SPECIES_AEGISLASH_BLADE] = sAegislashFormChangeTable,
    [SPECIES_XERNEAS] = sXerneasFormChangeTable,
    [SPECIES_XERNEAS_ACTIVE] = sXerneasFormChangeTable,
    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] = sZygardePowerConstructFormChangeTable,
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] = sZygardePowerConstructFormChangeTable,
    [SPECIES_ZYGARDE_COMPLETE] = sZygardePowerConstructFormChangeTable,
    [SPECIES_DIANCIE] = sDiancieFormChangeTable,
    [SPECIES_DIANCIE_MEGA] = sDiancieFormChangeTable,
    [SPECIES_HOOPA] = sHoopaFormChangeTable,
    [SPECIES_HOOPA_UNBOUND] = sHoopaFormChangeTable,
#endif
#if P_GEN_7_POKEMON == TRUE
    [SPECIES_ORICORIO] = sOricorioFormChangeTable,
    [SPECIES_ORICORIO_POM_POM] = sOricorioFormChangeTable,
    [SPECIES_ORICORIO_PAU] = sOricorioFormChangeTable,
    [SPECIES_ORICORIO_SENSU] = sOricorioFormChangeTable,
    [SPECIES_WISHIWASHI] = sWishiwashiFormChangeTable,
    [SPECIES_WISHIWASHI_SCHOOL] = sWishiwashiFormChangeTable,
    [SPECIES_SILVALLY] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_BUG] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_DARK] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_DRAGON] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_ELECTRIC] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_FAIRY] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_FIGHTING] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_FIRE] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_FLYING] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_GHOST] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_GRASS] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_GROUND] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_ICE] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_POISON] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_PSYCHIC] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_ROCK] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_STEEL] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_WATER] = sSilvallyFormChangeTable,
    [SPECIES_MIMIKYU] = sMimikyuFormChangeTable,
    [SPECIES_MIMIKYU_BUSTED] = sMimikyuFormChangeTable,
    [SPECIES_MINIOR] = sMiniorRedFormChangeTable,
    [SPECIES_MINIOR_CORE_RED] = sMiniorRedFormChangeTable,
    [SPECIES_MINIOR_METEOR_BLUE] = sMiniorBlueFormChangeTable,
    [SPECIES_MINIOR_CORE_BLUE] = sMiniorBlueFormChangeTable,
    [SPECIES_MINIOR_METEOR_GREEN] = sMiniorGreenFormChangeTable,
    [SPECIES_MINIOR_CORE_GREEN] = sMiniorGreenFormChangeTable,
    [SPECIES_MINIOR_METEOR_INDIGO] = sMiniorIndigoFormChangeTable,
    [SPECIES_MINIOR_CORE_INDIGO] = sMiniorIndigoFormChangeTable,
    [SPECIES_MINIOR_METEOR_ORANGE] = sMiniorOrangeFormChangeTable,
    [SPECIES_MINIOR_CORE_ORANGE] = sMiniorOrangeFormChangeTable,
    [SPECIES_MINIOR_METEOR_VIOLET] = sMiniorVioletFormChangeTable,
    [SPECIES_MINIOR_CORE_VIOLET] = sMiniorVioletFormChangeTable,
    [SPECIES_MINIOR_METEOR_YELLOW] = sMiniorYellowFormChangeTable,
    [SPECIES_MINIOR_CORE_YELLOW] = sMiniorYellowFormChangeTable,
#endif
#if P_GEN_8_POKEMON == TRUE
    [SPECIES_CRAMORANT] = sCramorantFormChangeTable,
    [SPECIES_CRAMORANT_GULPING] = sCramorantFormChangeTable,
    [SPECIES_CRAMORANT_GORGING] = sCramorantFormChangeTable,
    [SPECIES_EISCUE] = sEiscueFormChangeTable,
    [SPECIES_EISCUE_NOICE_FACE] = sEiscueFormChangeTable,
    [SPECIES_MORPEKO] = sMorpekoFormChangeTable,
    [SPECIES_MORPEKO_HANGRY] = sMorpekoFormChangeTable,
    [SPECIES_ZACIAN] = sZacianFormChangeTable,
    [SPECIES_ZACIAN_CROWNED_SWORD] = sZacianFormChangeTable,
    [SPECIES_ZAMAZENTA] = sZamazentaFormChangeTable,
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] = sZamazentaFormChangeTable,
    [SPECIES_ENAMORUS] = sEnamorusFormChangeTable,
    [SPECIES_ENAMORUS_THERIAN] = sEnamorusFormChangeTable,
#endif
};
