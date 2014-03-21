/*
 * Deutscher Wetterdienst (DWD): Offenbach
 * Center: 78
 * Subcenter: 0
 * Parameter table version: 202
 */

TBLE2 dwd_202_params[] = {
{1, "jonswap parameter fm", "s**(-1)", "SEEG_PEAK"},
{2, "jonswap parameter alpha", "1", "SEEG_ALPHA"},
{3, "jonswap parameter gamma", "1", "SEEG_GAMMA"},
{4, "Seegang direction", "degree true", "SEEG_DIR"},
{5, "Seegang energy densitiy", "(m**2)*(s**2)", "SEEG_ENERG"},
{6, "Seegang ice mask", "1", "SEEG_ICEMK"},
{7, "peak period of swell", "s", "PEAK_P_SW"},
{8, "peak period of wind waves", "s", "PEAK_P_WW"},
{20, "Varianz Geopotential", "(m/s)**4", "VAR_GEOP"},
{21, "Varianz Temperatur", "K**2", "VAR_T"},
{22, "Varianz Zonalwind", "(m/s)**2", "VAR_U"},
{23, "Varianz Meridionalwind", "(m/s)**2", "VAR_V"},
{24, "Varianz spezifische Feuchte", "(kg/kg)**2", "VAR_Q"},
{25, "Meridionaler Impulstransport", "(m/s)**2", "MER_IMPTR"},
{26, "Meridionaler Transport potentieller Energie", "(m/s)**3", "MER_TREPT"},
{27, "Meridionaler Transport sensibler Waerme", "K*(m/s)", "MER_TRSW"},
{28, "Meridionaler Transport latenter Waerme", "(kg/kg)*(m/s)", "MER_TRLW"},
{29, "Vertikaler Transport potentieller Energie", "(m/s)**2*(Pa/s)", "VER_TREPT"},
{30, "Vertikaler Transport sensibler Waerme", "K*(Pa/s)", "VER_TRSW"},
{31, "Vertikaler Transport latenter Waerme", "(kg/kg)*(Pa/s)", "VER_TRLW"},
{40, "Varianz des Analyse-Fehlers Geopotential", "(m/s)**4", "VARAF_GEOP"},
{41, "Varianz des Analyse-Fehlers Zonalwind", "(m/s)**2", "VARAF_U"},
{42, "Varianz des Analyse-Fehlers Meridionalwind", "(m/s)**2", "VARAF_V"},
{46, "standard deviation of subgrid scale orogr. height", "m", "SSO_STDH"},
{47, "anisotropy of topography", "1", "SSO_GAMMA"},
{48, "angle betw. principal axis of orogr. and global E", "1", "SSO_THETA"},
{49, "mean slope of subgrid scale orography", "1", "SSO_SIGMA"},
{50, "subgrid-scale variance of orography", "m**2", "ORO_VARIAN"},
{51, "E-W component of subgrid-scale variance of orogr", "m**2", "E_W_ORO_VA"},
{52, "N-S component of subgrid-scale variance of orogr", "m**2", "N_S_ORO_VA"},
{53, "NW-SE component of subgrid-scale variance of orogr", "m**2", "NW_SE_O_VA"},
{54, "NE-SW component of subgrid-scale variance of orogr", "m**2", "NE_SW_O_VA"},
{55, "fraction of inland water", "1", "INL_W_FRAC"},
{56, "surface emissivity", "1", "SURF_EMISS"},
{57, "soil texture", "1", "SOILTYP"},
{58, "soil color", "1", "SOIL_COLOR"},
{59, "soil drainage", "1", "SOIL_DRAIN"},
{60, "ground water table", "m", "GROUND_WAT"},
{61, "leaf area index", "1", "LAI"},
{62, "root depth", "m", "ROOT"},
{63, "root density", "1", "ROOT_DENS"},
{64, "height of maximum of ozone concentration", "Pa", "HMO3"},
{65, "total vertically integrated ozone content", "Pa", "VIO3"},
{66, "land-sea mask", "1", "LD_SEA_MSK"},
{67, "ground fraction covered by plants (vegetation p.)", "1", "PLCOV_MX"},
{68, "ground fraction covered by plants (time of rest)", "1", "PLCOV_MN"},
{69, "leaf area index (vegetation period)", "1", "LAI_MX"},
{70, "leaf area index (time of rest)", "1", "LAI_MN"},
{71, "Orographie + Land-Meer-Verteilung", "m", "OROGRAPHIE"},
{72, "roughness length momentum", "m", "R_LENGTH_M"},
{73, "roughness length heat", "m", "R_LENGTH_H"},
{74, "variance of soil moisture content", "kg**2/m**4", "VAR_SMC"},
{75, "fractional coverage with evergreen forest", "1", "FOR_E"},
{76, "fractional coverage with deciduous forest", "1", "FOR_D"},
{77, "normalized differential vegetation index", "index", "NORDIFVEGI"},
{78, "annual max. of norm. differential vegetation index", "index", "AMNODIVEGI"},
{79, "proportion of act.value/max. norm.diff.veg.index", "index", "PROPVI_MVI"},
{80, "aerosol optical depth, type sea", "index", "AOD_SEA"},
{81, "aerosol optical depth, type land", "index", "AOD_LAND"},
{82, "aerosol optical depth, type urban", "index", "AOD_URBAN"},
{83, "aerosol optical depth, type desert", "index", "AOD_DESERT"},
{101, "tidal tendencies", "(m/s)**2", "TIDAL_TEND"},
{102, "sum of diabatic heating terms", "K/s", "DIAB_HEATG"},
{103, "total adiabatic heating", "K/s", "ADIAB_HEAT"},
{104, "advective tendency of specific humidity", "s**(-1)", "ADV_Q_TEND"},
{105, "non-advective tendency of specific humidity", "s**(-1)", "NADV_Q_TEN"},
{106, "advective momentum tendency (X component)", "m/s**2", "ADV_M_TE_X"},
{107, "advective momentum tendency (Y component)", "m/s**2", "ADV_M_TE_Y"},
{108, "non-advective momentum tendency (X component)", "m/s**2", "NAD_M_TE_X"},
{109, "non-advective momentum tendency (Y component)", "m/s**2", "NAD_M_TE_Y"},
{110, "sum of mountain and frictional torque", "kg*(m/s)**2", "TORQUE"},
{111, "budget values", "1", "BUDGET_VAL"},
{112, "scale factor", "1", "SCALE_FACT"},
{113, "Coriolis parameter", "s**(-1)", "CORIOL_PAR"},
{114, "latitude", "degr N", "PHI"},
{115, "longitude", "degr E", "RLA"},
{116, "relaxation factor (lateral boundary, LAM)", "1", "RELAX_FACT"},
{117, "climatic sea surface temp interpolated in time", "degr C", "CLIMSSTINT"},
{118, "potential vorticity", "K*m**2/(s*kg)", "POT_VORTIC"},
{119, "log surface pressure", "1", "LN_PS"},
{120, "undefined","undefined","EXP_SI"},
{121, "undefined","undefined","RHS_SI"},
{122, "undefined","undefined","DTTDIV"},
{123, "integrated dry atmospheric refractivity", "m", "ZHD"},
{150, "SO2-concentration", "10**(-6)*g/m**3", "SO2_CONC"},
{151, "SO2-dry deposition", "10**(-3)*g/m**2", "SO2_DRYD"},
{152, "SO2-wet deposition", "10**(-3)*g/m**2", "SO2_WETD"},
{153, "SO4-concentration", "10**(-6)*g/m**3", "SO4_CONC"},
{154, "SO4-dry deposition", "10**(-3)*g/m**2", "SO4_DRYD"},
{155, "SO4-wet deposition", "10**(-3)*g/m**2", "SO4_WETD"},
{156, "NO-concentration", "10**(-6)*g/m**3", "NO_CONC"},
{157, "NO-dry deposition", "10**(-3)*g/m**2", "NO_DRYD"},
{158, "NO-wet deposition", "10**(-3)*g/m**2", "NO_WETD"},
{159, "NO2-concentration", "10**(-6)*g/m**3", "NO2_CONC"},
{160, "NO2-dry deposition", "10**(-3)*g/m**2", "NO2_DRYD"},
{161, "NO2-wet deposition", "10**(-3)*g/m**2", "NO2_WETD"},
{162, "NO3-concentration", "10**(-6)*g/m**3", "NO3_CONC"},
{163, "NO3-dry deposition", "10**(-3)*g/m**2", "NO3_DRYD"},
{164, "NO3-wet deposition", "10**(-3)*g/m**2", "NO3_WETD"},
{165, "HNO3-concentration", "10**(-6)*g/m**3", "HNO3_CONC"},
{166, "HNO3-dry deposition", "10**(-3)*g/m**2", "HNO3_DRYD"},
{167, "HNO3-wet deposition", "10**(-3)*g/m**2", "HNO3_WETD"},
{168, "NH3-concentration", "10**(-6)*g/m**3", "NH3_CONC"},
{169, "NH3-dry deposition", "10**(-3)*g/m**2", "NH3_DRYD"},
{170, "NH3-wet deposition", "10**(-3)*g/m**2", "NH3_WETD"},
{171, "NH4-concentration", "10**(-6)*g/m**3", "NH4_CONC"},
{172, "NH4-dry deposition", "10**(-3)*g/m**2", "NH4_DRYD"},
{173, "NH4-wet deposition", "10**(-3)*g/m**2", "NH4_WETD"},
{174, "O3-concentration", "10**(-6)*g/m**3", "O3_CONC"},
{175, "PAN-concentration", "10**(-6)*g/m**3", "PAN_CONC"},
{176, "PAN-dry deposition", "10**(-3)*g/m**2", "PAN_DRYD"},
{177, "OH-concentration", "10**(-6)*g/m**3", "OH_CONC"},
{178, "O3-dry deposition", "10**(-3)*g/m**2", "O3_DRYD"},
{179, "O3-wet deposition", "10**(-3)*g/m**2", "O3_WETD"},
{180, "specific ozone content", "kg/kg", "O3"},
{194, "Ru103-concentration", "Bq/m**3", "RU103_CONC"},
{195, "Ru103-dry deposition", "Bq/m**2", "RU103_DRYD"},
{196, "Ru103-wet deposition", "Bq/m**2", "RU103_WETD"},
{197, "Sr90-concentration", "Bq/m**3", "SR90_CONC"},
{198, "Sr90-dry deposition", "Bq/m**2", "SR90_DRYD"},
{199, "Sr90-wet deposition", "Bq/m**2", "SR90_WETD"},
{200, "I131-concentration", "Bq/m**3", "I131_CONC"},
{201, "I131-dry deposition", "Bq/m**2", "I131_DRYD"},
{202, "I131-wet deposition", "Bq/m**2", "I131_WETD"},
{203, "Cs137-concentration", "Bq/m**3", "CS137_CONC"},
{204, "Cs1370dry deposition", "Bq/m**2", "CS137_DRYD"},
{205, "Cs137-wet deposition", "Bq/m**2", "CS137_WETD"},
{206, "Te132-concentration", "Bq/m**3", "TE132_CONC"},
{207, "Te132-dry deposition", "Bq/m**2", "TE132_DRYD"},
{208, "Te132-wet deposition", "Bq/m**2", "TE132_WETD"},
{209, "Zr95-concentration", "Bq/m**3", "ZR95_CONC"},
{210, "Zr95-dry deposition", "Bq/m**2", "ZR95_DRYD"},
{211, "Zr95-wet deposition", "Bq/m**2", "ZR95_WETD"},
{212, "Kr85-concentration",  "Bq/m**3", "KR85_CONC"},
{213, "Kr85-dry deposition", "Bq/m**2", "KR85_DRYD"},
{214, "Kr85-wet deposition", "Bq/m**2", "KR85_WETD"},
{215, "TRACER-concentration", "Bq/m**3", "TRACERCONC"},
{216, "TRACER-dry deposition", "Bq/m**2", "TRACERDRYD"},
{217, "TRACER-wet deposition", "Bq/m**2", "TRACERWETD"},
{218, "Xe133-concentration", "Bq/m**3", "XE133_CONC"},
{219, "Xe133-dry deposition", "Bq/m**2", "XE133_DRYD"},
{220, "Xe133-wet deposition", "Bq/m**2", "XE133_WETD"},
{221, "I131g-concentration", "Bq/m**3", "I131G_CONC"},
{222, "I131g-dry deposition", "Bq/m**2", "I131G_DRYD"},
{223, "I131g-wet deposition", "Bq/m**2", "I131G_WETD"},
{224, "I131o-concentration", "Bq/m**3", "I131O_CONC"},
{225, "I131o-dry deposition", "Bq/m**2", "I131O_DRYD"},
{226, "I131o-wet deposition", "Bq/m**2", "I131O_WETD"},
{227, "Ba140-concentration", "Bq/m**3", "BA140_CONC"},
{228, "Ba140-dry deposition", "Bq/m**2", "BA140_DRYD"},
{229, "Ba140-wet deposition", "Bq/m**2", "BA140_WETD"},
{231, "Mom. flux, u component, due to SSO-effects", "(N/(m**2)", "SSO_MFLU_U"},
{232, "Mom. flux, v component, due to SSO-effects", "(N/(m**2)", "SSO_MFLU_V"},
{233, "Dissipation of kinetic energy due to SSO-effects", "(W/(m**2)", "SSO_KE_DIS"},
{240, "UV_Index corr. for albedo+altitude,cloudless(F), h", "index", "UV_IND_F_H"},
{241, "Basic UV_Index m.s.l.,fixed albedo,cloudless(F), h", "index", "BASICUV_IF"},
{242, "UV_Index corrected for albedo+altitude+clouds(W),h", "index", "UV_IND_W_H"},
{243, "UV-Index, cloudless (wolkenlos=F) Maximum", "1", "UV_INDMAXF"},
{244, "Sonnenbrand-Index", "(W*10**(-3))/m**2", "SB_INDEX"},
{245, "Sonnenbrand-Index bei mittl. Bewoelkung (08z-12z)", "(W*10**(-3))/m**2", "SB_INDEX_W"},
{246, "Kanadischer UVB-Warnindex (bew|lkungsreduziert)", "(W*10**(-3))/m**2", "KAN_UVB_WI"},
{247, "total column ozone (Gesamtozon)", "Dobson", "GESAMT_O3"},
{248, "UV-Index, clouded (bewoelkt=W) Maximum", "1", "UV_INDMAXW"},
{249, "time (Zeit) of UV-Index-Maximum", "h UTC", "H_UV_INDMX"},
};