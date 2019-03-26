/**
 * @file    mesh_multi_targets.c
 * @brief   board ID for the Mesheven No-targets: nRF52/STM32F031/STM32F051/STM32F072/STM32F301/STM32L486/STM32F415
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "target_board.h"
#include "target_family.h"
#include "swd_host.h"

const board_info_t g_board_info = {
		.infoVersion = 0x1234,
        .family_id   = kMesheven_FamilyID,
		.board_id = "1080",
		.daplink_url_name =       "MBED    HTM",
		.daplink_drive_name = 		"DAPLINK    ",
		.daplink_target_url = "https://mbed.org/device/?code=@U?version=@V?target_id=@T",
        .flags = (kEnablePageErase) | (kEnableUnderResetConnect),
        .target_cfg = &target_device,
        .soft_reset_type = SYSRESETREQ,        
};

