#ifdef CONFIG_FORCE_FAST_CHARGE
#include <linux/fastchg.h>
#define USB_FASTCHG_LOAD 1000 /* uA */
#endif

#ifdef CONFIG_FORCE_FAST_CHARGE
	if (force_fast_charge == 1) {
			mA = USB_FASTCHG_LOAD;
			pr_info("USB fast charging is ON - 1000mA.\n");
	} else {
		pr_info("USB fast charging is OFF.\n");
	}
#endif
