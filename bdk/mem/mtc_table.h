/*
 * Minerva Training Cell
 * DRAM Training for Tegra X1 SoC. Supports DDR2/3 and LPDDR3/4.
 *
 * Copyright (c) 2018 CTCaer  <ctcaer@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MTC_TABLE_H_
#define _MTC_TABLE_H_

#include <utils/types.h>

typedef struct
{
	s32 pll_osc_in;
	s32 pll_out;
	u32 pll_feedback_div;
	u32 pll_input_div;
	u32 pll_post_div;
} pllm_clk_config_t;

typedef struct
{
	u32 emc_rc_idx;
	u32 emc_rfc_idx;
	u32 emc_rfcpb_idx;
	u32 emc_refctrl2_idx;
	u32 emc_rfc_slr_idx;
	u32 emc_ras_idx;
	u32 emc_rp_idx;
	u32 emc_r2w_idx;
	u32 emc_w2r_idx;
	u32 emc_r2p_idx;
	u32 emc_w2p_idx;
	u32 emc_r2r_idx;
	u32 emc_tppd_idx;
	u32 emc_ccdmw_idx;
	u32 emc_rd_rcd_idx;
	u32 emc_wr_rcd_idx;
	u32 emc_rrd_idx;
	u32 emc_rext_idx;
	u32 emc_wext_idx;
	u32 emc_wdv_chk_idx;
	u32 emc_wdv_idx;
	u32 emc_wsv_idx;
	u32 emc_wev_idx;
	u32 emc_wdv_mask_idx;
	u32 emc_ws_duration_idx;
	u32 emc_we_duration_idx;
	u32 emc_quse_idx;
	u32 emc_quse_width_idx;
	u32 emc_ibdly_idx;
	u32 emc_obdly_idx;
	u32 emc_einput_idx;
	u32 emc_mrw6_idx;
	u32 emc_einput_duration_idx;
	u32 emc_puterm_extra_idx;
	u32 emc_puterm_width_idx;
	u32 emc_qrst_idx;
	u32 emc_qsafe_idx;
	u32 emc_rdv_idx;
	u32 emc_rdv_mask_idx;
	u32 emc_rdv_early_idx;
	u32 emc_rdv_early_mask_idx;
	u32 emc_refresh_idx;
	u32 emc_burst_refresh_num_idx;
	u32 emc_pre_refresh_req_cnt_idx;
	u32 emc_pdex2wr_idx;
	u32 emc_pdex2rd_idx;
	u32 emc_pchg2pden_idx;
	u32 emc_act2pden_idx;
	u32 emc_ar2pden_idx;
	u32 emc_rw2pden_idx;
	u32 emc_cke2pden_idx;
	u32 emc_pdex2cke_idx;
	u32 emc_pdex2mrr_idx;
	u32 emc_txsr_idx;
	u32 emc_txsrdll_idx;
	u32 emc_tcke_idx;
	u32 emc_tckesr_idx;
	u32 emc_tpd_idx;
	u32 emc_tfaw_idx;
	u32 emc_trpab_idx;
	u32 emc_tclkstable_idx;
	u32 emc_tclkstop_idx;
	u32 emc_mrw7_idx;
	u32 emc_trefbw_idx;
	u32 emc_odt_write_idx;
	u32 emc_fbio_cfg5_idx;
	u32 emc_fbio_cfg7_idx;
	u32 emc_cfg_dig_dll_idx;
	u32 emc_cfg_dig_dll_period_idx;
	u32 emc_pmacro_ib_rxrt_idx;
	u32 emc_cfg_pipe_1_idx;
	u32 emc_cfg_pipe_2_idx;
	u32 emc_pmacro_quse_ddll_rank0_4_idx;
	u32 emc_pmacro_quse_ddll_rank0_5_idx;
	u32 emc_pmacro_quse_ddll_rank1_4_idx;
	u32 emc_pmacro_quse_ddll_rank1_5_idx;
	u32 emc_mrw8_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank1_4_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank1_5_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank0_0_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank0_1_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank0_2_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank0_3_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank0_4_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank0_5_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank1_0_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank1_1_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank1_2_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank1_3_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank1_4_idx;
	u32 emc_pmacro_ob_ddll_long_dqs_rank1_5_idx;
	u32 emc_pmacro_ddll_long_cmd_0_idx;
	u32 emc_pmacro_ddll_long_cmd_1_idx;
	u32 emc_pmacro_ddll_long_cmd_2_idx;
	u32 emc_pmacro_ddll_long_cmd_3_idx;
	u32 emc_pmacro_ddll_long_cmd_4_idx;
	u32 emc_pmacro_ddll_short_cmd_0_idx;
	u32 emc_pmacro_ddll_short_cmd_1_idx;
	u32 emc_pmacro_ddll_short_cmd_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte0_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte1_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte2_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte3_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte4_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte5_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte6_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte7_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd0_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd1_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd2_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd3_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte0_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte1_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte2_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte3_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte4_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte5_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte6_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte7_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd0_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd0_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd0_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd0_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd1_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd1_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd1_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd1_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd2_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd2_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd2_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd2_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd3_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd3_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd3_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_cmd3_3_idx;
	u32 emc_txdsrvttgen_idx;
	u32 emc_fdpd_ctrl_dq_idx;
	u32 emc_fdpd_ctrl_cmd_idx;
	u32 emc_fbio_spare_idx;
	u32 emc_zcal_interval_idx;
	u32 emc_zcal_wait_cnt_idx;
	u32 emc_mrs_wait_cnt_idx;
	u32 emc_mrs_wait_cnt2_idx;
	u32 emc_auto_cal_channel_idx;
	u32 emc_dll_cfg_0_idx;
	u32 emc_dll_cfg_1_idx;
	u32 emc_pmacro_autocal_cfg_common_idx;
	u32 emc_pmacro_zctrl_idx;
	u32 emc_cfg_idx;
	u32 emc_cfg_pipe_idx;
	u32 emc_dyn_self_ref_control_idx;
	u32 emc_qpop_idx;
	u32 emc_dqs_brlshft_0_idx;
	u32 emc_dqs_brlshft_1_idx;
	u32 emc_cmd_brlshft_2_idx;
	u32 emc_cmd_brlshft_3_idx;
	u32 emc_pmacro_pad_cfg_ctrl_idx;
	u32 emc_pmacro_data_pad_rx_ctrl_idx;
	u32 emc_pmacro_cmd_pad_rx_ctrl_idx;
	u32 emc_pmacro_data_rx_term_mode_idx;
	u32 emc_pmacro_cmd_rx_term_mode_idx;
	u32 emc_pmacro_cmd_pad_tx_ctrl_idx;
	u32 emc_pmacro_data_pad_tx_ctrl_idx;
	u32 emc_pmacro_common_pad_tx_ctrl_idx;
	u32 emc_pmacro_vttgen_ctrl_0_idx;
	u32 emc_pmacro_vttgen_ctrl_1_idx;
	u32 emc_pmacro_vttgen_ctrl_2_idx;
	u32 emc_pmacro_brick_ctrl_rfu1_idx;
	u32 emc_pmacro_cmd_brick_ctrl_fdpd_idx;
	u32 emc_pmacro_brick_ctrl_rfu2_idx;
	u32 emc_pmacro_data_brick_ctrl_fdpd_idx;
	u32 emc_pmacro_bg_bias_ctrl_0_idx;
	u32 emc_cfg_3_idx;
	u32 emc_pmacro_tx_pwrd_0_idx;
	u32 emc_pmacro_tx_pwrd_1_idx;
	u32 emc_pmacro_tx_pwrd_2_idx;
	u32 emc_pmacro_tx_pwrd_3_idx;
	u32 emc_pmacro_tx_pwrd_4_idx;
	u32 emc_pmacro_tx_pwrd_5_idx;
	u32 emc_config_sample_delay_idx;
	u32 emc_pmacro_tx_sel_clk_src_0_idx;
	u32 emc_pmacro_tx_sel_clk_src_1_idx;
	u32 emc_pmacro_tx_sel_clk_src_2_idx;
	u32 emc_pmacro_tx_sel_clk_src_3_idx;
	u32 emc_pmacro_tx_sel_clk_src_4_idx;
	u32 emc_pmacro_tx_sel_clk_src_5_idx;
	u32 emc_pmacro_ddll_bypass_idx;
	u32 emc_pmacro_ddll_pwrd_0_idx;
	u32 emc_pmacro_ddll_pwrd_1_idx;
	u32 emc_pmacro_ddll_pwrd_2_idx;
	u32 emc_pmacro_cmd_ctrl_0_idx;
	u32 emc_pmacro_cmd_ctrl_1_idx;
	u32 emc_pmacro_cmd_ctrl_2_idx;
	u32 emc_tr_timing_0_idx;
	u32 emc_tr_dvfs_idx;
	u32 emc_tr_ctrl_1_idx;
	u32 emc_tr_rdv_idx;
	u32 emc_tr_qpop_idx;
	u32 emc_tr_rdv_mask_idx;
	u32 emc_mrw14_idx;
	u32 emc_tr_qsafe_idx;
	u32 emc_tr_qrst_idx;
	u32 emc_training_ctrl_idx;
	u32 emc_training_settle_idx;
	u32 emc_training_vref_settle_idx;
	u32 emc_training_ca_fine_ctrl_idx;
	u32 emc_training_ca_ctrl_misc_idx;
	u32 emc_training_ca_ctrl_misc1_idx;
	u32 emc_training_ca_vref_ctrl_idx;
	u32 emc_training_quse_cors_ctrl_idx;
	u32 emc_training_quse_fine_ctrl_idx;
	u32 emc_training_quse_ctrl_misc_idx;
	u32 emc_training_quse_vref_ctrl_idx;
	u32 emc_training_read_fine_ctrl_idx;
	u32 emc_training_read_ctrl_misc_idx;
	u32 emc_training_read_vref_ctrl_idx;
	u32 emc_training_write_fine_ctrl_idx;
	u32 emc_training_write_ctrl_misc_idx;
	u32 emc_training_write_vref_ctrl_idx;
	u32 emc_training_mpc_idx;
	u32 emc_mrw15_idx;
} burst_regs_t;


typedef struct
{
	u32 burst_regs[221];
	u32 burst_reg_per_ch[8];
	u32 shadow_regs_ca_train[221];
	u32 shadow_regs_quse_train[221];
	u32 shadow_regs_rdwr_train[221];
} burst_regs_table_t;

typedef struct
{
	u32 ptfv_dqsosc_movavg_c0d0u0_idx;
	u32 ptfv_dqsosc_movavg_c0d0u1_idx;
	u32 ptfv_dqsosc_movavg_c0d1u0_idx;
	u32 ptfv_dqsosc_movavg_c0d1u1_idx;
	u32 ptfv_dqsosc_movavg_c1d0u0_idx;
	u32 ptfv_dqsosc_movavg_c1d0u1_idx;
	u32 ptfv_dqsosc_movavg_c1d1u0_idx;
	u32 ptfv_dqsosc_movavg_c1d1u1_idx;
	u32 ptfv_write_samples_idx;
	u32 ptfv_dvfs_samples_idx;
	u32 ptfv_movavg_weight_idx;
	u32 ptfv_config_ctrl_idx;
} ptfv_list_table_t;

typedef struct
{
	u32 emc0_mrw10_idx;
	u32 emc1_mrw10_idx;
	u32 emc0_mrw11_idx;
	u32 emc1_mrw11_idx;
	u32 emc0_mrw12_idx;
	u32 emc1_mrw12_idx;
	u32 emc0_mrw13_idx;
	u32 emc1_mrw13_idx;
} burst_reg_per_ch_t;

typedef struct
{
	u32 emc_pmacro_ib_ddll_long_dqs_rank0_0_idx;
	u32 emc_pmacro_ib_ddll_long_dqs_rank0_1_idx;
	u32 emc_pmacro_ib_ddll_long_dqs_rank0_2_idx;
	u32 emc_pmacro_ib_ddll_long_dqs_rank0_3_idx;
	u32 emc_pmacro_ib_ddll_long_dqs_rank1_0_idx;
	u32 emc_pmacro_ib_ddll_long_dqs_rank1_1_idx;
	u32 emc_pmacro_ib_ddll_long_dqs_rank1_2_idx;
	u32 emc_pmacro_ib_ddll_long_dqs_rank1_3_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte0_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte0_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte0_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte1_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte1_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte1_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte2_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte2_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte2_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte3_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte3_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte3_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte4_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte4_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte4_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte5_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte5_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte5_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte6_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte6_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte6_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte7_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte7_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank0_byte7_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte0_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte0_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte0_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte1_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte1_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte1_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte2_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte2_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte2_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte3_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte3_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte3_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte4_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte4_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte4_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte5_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte5_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte5_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte6_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte6_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte6_2_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte7_0_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte7_1_idx;
	u32 emc_pmacro_ib_ddll_short_dq_rank1_byte7_2_idx;
	u32 emc_pmacro_ib_vref_dqs_0_idx;
	u32 emc_pmacro_ib_vref_dqs_1_idx;
	u32 emc_pmacro_ib_vref_dq_0_idx;
	u32 emc_pmacro_ib_vref_dq_1_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank0_0_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank0_1_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank0_2_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank0_3_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank0_4_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank0_5_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank1_0_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank1_1_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank1_2_idx;
	u32 emc_pmacro_ob_ddll_long_dq_rank1_3_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte0_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte0_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte0_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte1_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte1_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte1_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte2_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte2_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte2_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte3_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte3_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte3_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte4_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte4_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte4_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte5_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte5_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte5_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte6_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte6_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte6_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte7_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte7_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_byte7_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd0_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd0_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd0_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd1_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd1_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd1_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd2_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd2_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd2_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd3_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd3_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank0_cmd3_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte0_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte0_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte0_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte1_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte1_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte1_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte2_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte2_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte2_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte3_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte3_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte3_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte4_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte4_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte4_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte5_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte5_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte5_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte6_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte6_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte6_2_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte7_0_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte7_1_idx;
	u32 emc_pmacro_ob_ddll_short_dq_rank1_byte7_2_idx;
	u32 emc_pmacro_quse_ddll_rank0_0_idx;
	u32 emc_pmacro_quse_ddll_rank0_1_idx;
	u32 emc_pmacro_quse_ddll_rank0_2_idx;
	u32 emc_pmacro_quse_ddll_rank0_3_idx;
	u32 emc_pmacro_quse_ddll_rank1_0_idx;
	u32 emc_pmacro_quse_ddll_rank1_1_idx;
	u32 emc_pmacro_quse_ddll_rank1_2_idx;
	u32 emc_pmacro_quse_ddll_rank1_3_idx;
} trim_regs_t;

typedef struct
{
	u32 emc_cmd_brlshft_0_idx;
	u32 emc_cmd_brlshft_1_idx;
	u32 emc0_data_brlshft_0_idx;
	u32 emc1_data_brlshft_0_idx;
	u32 emc0_data_brlshft_1_idx;
	u32 emc1_data_brlshft_1_idx;
	u32 emc_quse_brlshft_0_idx;
	u32 emc_quse_brlshft_1_idx;
	u32 emc_quse_brlshft_2_idx;
	u32 emc_quse_brlshft_3_idx;
} trim_perch_regs_t;

typedef struct
{
	u32 t_rp;
	u32 t_fc_lpddr4;
	u32 t_rfc;
	u32 t_pdex;
	u32 rl;
} dram_timings_t;

typedef struct
{
	u32 emc0_training_opt_dqs_ib_vref_rank0_idx;
	u32 emc1_training_opt_dqs_ib_vref_rank0_idx;
	u32 emc0_training_opt_dqs_ib_vref_rank1_idx;
	u32 emc1_training_opt_dqs_ib_vref_rank1_idx;
} vref_perch_regs_t;

typedef struct
{
	u32 trim_regs[138];
	u32 trim_perch_regs[10];
	u32 vref_perch_regs[4];
} trim_regs_table_t;

typedef struct
{
	u32 rev;
	char dvfs_ver[60];
	u32 rate_khz;
	u32 min_volt;
	u32 gpu_min_volt;
	char clock_src[32];
	u32 clk_src_emc;
	u32 needs_training;
	u32 training_pattern;
	u32 trained;
	u32 periodic_training;
	u32 trained_dram_clktree_c0d0u0;
	u32 trained_dram_clktree_c0d0u1;
	u32 trained_dram_clktree_c0d1u0;
	u32 trained_dram_clktree_c0d1u1;
	u32 trained_dram_clktree_c1d0u0;
	u32 trained_dram_clktree_c1d0u1;
	u32 trained_dram_clktree_c1d1u0;
	u32 trained_dram_clktree_c1d1u1;
	u32 current_dram_clktree_c0d0u0;
	u32 current_dram_clktree_c0d0u1;
	u32 current_dram_clktree_c0d1u0;
	u32 current_dram_clktree_c0d1u1;
	u32 current_dram_clktree_c1d0u0;
	u32 current_dram_clktree_c1d0u1;
	u32 current_dram_clktree_c1d1u0;
	u32 current_dram_clktree_c1d1u1;
	u32 run_clocks;
	u32 tree_margin;
	u32 num_burst;
	u32 num_burst_per_ch;
	u32 num_trim;
	u32 num_trim_per_ch;
	u32 num_mc_regs;
	u32 num_up_down;
	u32 vref_num;
	u32 training_mod_num;
	u32 dram_timing_num;

	ptfv_list_table_t ptfv_list;

	burst_regs_t burst_regs;
	burst_reg_per_ch_t burst_reg_per_ch;
	burst_regs_t shadow_regs_ca_train;
	burst_regs_t shadow_regs_quse_train;
	burst_regs_t shadow_regs_rdwr_train;
	trim_regs_t trim_regs;
	trim_perch_regs_t trim_perch_regs;
	vref_perch_regs_t vref_perch_regs;
	dram_timings_t dram_timings;

	u32 training_mod_regs[20];
	u32 save_restore_mod_regs[12];
	u32 burst_mc_regs[33];
	u32 la_scale_regs[24];

	u32 min_mrs_wait;
	u32 emc_mrw;
	u32 emc_mrw2;
	u32 emc_mrw3;
	u32 emc_mrw4;
	u32 emc_mrw9;
	u32 emc_mrs;
	u32 emc_emrs;
	u32 emc_emrs2;
	u32 emc_auto_cal_config;
	u32 emc_auto_cal_config2;
	u32 emc_auto_cal_config3;
	u32 emc_auto_cal_config4;
	u32 emc_auto_cal_config5;
	u32 emc_auto_cal_config6;
	u32 emc_auto_cal_config7;
	u32 emc_auto_cal_config8;
	u32 emc_cfg_2;
	u32 emc_sel_dpd_ctrl;
	u32 emc_fdpd_ctrl_cmd_no_ramp;
	u32 dll_clk_src;
	u32 clk_out_enb_x_0_clk_enb_emc_dll;
	u32 latency;
} emc_table_t;

#endif