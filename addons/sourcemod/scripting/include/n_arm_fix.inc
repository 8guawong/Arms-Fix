#if defined n_arm_fix_include
  #endinput
#endif
#define n_arm_fix_include
 

/**
 * Called when it's safe to set arms.
 *
 * @param	client			client index
 * @return  no return
 */
forward void ArmsFix_OnArmsSafe(int client);

/**
 * Called when it's safe to set player model.
 *
 * @param	client			client index
 * @return  no return
 */
forward void ArmsFix_OnModelSafe(int client);


public SharedPlugin n_arm_fix_include_shared =
{
	name = "Skin & Arms Fix",
	file = "n_arms_fix.smx",
#if defined REQUIRE_PLUGIN
	required = 1
#else
	required = 0
#endif
};