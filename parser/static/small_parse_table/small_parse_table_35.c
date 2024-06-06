/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_35.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_175(t_small_parse_table_array *v)
{
	v->a[3500] = anon_sym__;
	v->a[3501] = actions(810);
	v->a[3502] = 34;
	v->a[3503] = anon_sym_esac;
	v->a[3504] = anon_sym_PIPE;
	v->a[3505] = anon_sym_SEMI_SEMI;
	v->a[3506] = anon_sym_SEMI_AMP;
	v->a[3507] = anon_sym_SEMI_SEMI_AMP;
	v->a[3508] = anon_sym_PIPE_AMP;
	v->a[3509] = anon_sym_AMP_AMP;
	v->a[3510] = anon_sym_PIPE_PIPE;
	v->a[3511] = anon_sym_LT;
	v->a[3512] = anon_sym_GT;
	v->a[3513] = anon_sym_GT_GT;
	v->a[3514] = anon_sym_AMP_GT;
	v->a[3515] = anon_sym_AMP_GT_GT;
	v->a[3516] = anon_sym_LT_AMP;
	v->a[3517] = anon_sym_GT_AMP;
	v->a[3518] = anon_sym_GT_PIPE;
	v->a[3519] = anon_sym_LT_AMP_DASH;
	small_parse_table_176(v);
}

void	small_parse_table_176(t_small_parse_table_array *v)
{
	v->a[3520] = anon_sym_GT_AMP_DASH;
	v->a[3521] = anon_sym_LT_LT;
	v->a[3522] = anon_sym_LT_LT_DASH;
	v->a[3523] = aux_sym_heredoc_redirect_token1;
	v->a[3524] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3525] = anon_sym_AMP;
	v->a[3526] = sym__special_character;
	v->a[3527] = anon_sym_DQUOTE;
	v->a[3528] = sym_raw_string;
	v->a[3529] = aux_sym_number_token1;
	v->a[3530] = aux_sym_number_token2;
	v->a[3531] = anon_sym_DOLLAR_LBRACE;
	v->a[3532] = anon_sym_DOLLAR_LPAREN;
	v->a[3533] = anon_sym_BQUOTE;
	v->a[3534] = anon_sym_DOLLAR_BQUOTE;
	v->a[3535] = sym_word;
	v->a[3536] = anon_sym_SEMI;
	v->a[3537] = 21;
	v->a[3538] = actions(3);
	v->a[3539] = 1;
	small_parse_table_177(v);
}

void	small_parse_table_177(t_small_parse_table_array *v)
{
	v->a[3540] = sym_comment;
	v->a[3541] = actions(697);
	v->a[3542] = 1;
	v->a[3543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3544] = actions(699);
	v->a[3545] = 1;
	v->a[3546] = anon_sym_DOLLAR;
	v->a[3547] = actions(701);
	v->a[3548] = 1;
	v->a[3549] = sym__special_character;
	v->a[3550] = actions(703);
	v->a[3551] = 1;
	v->a[3552] = anon_sym_DQUOTE;
	v->a[3553] = actions(705);
	v->a[3554] = 1;
	v->a[3555] = aux_sym_number_token1;
	v->a[3556] = actions(707);
	v->a[3557] = 1;
	v->a[3558] = aux_sym_number_token2;
	v->a[3559] = actions(709);
	small_parse_table_178(v);
}

void	small_parse_table_178(t_small_parse_table_array *v)
{
	v->a[3560] = 1;
	v->a[3561] = anon_sym_DOLLAR_LBRACE;
	v->a[3562] = actions(711);
	v->a[3563] = 1;
	v->a[3564] = anon_sym_DOLLAR_LPAREN;
	v->a[3565] = actions(713);
	v->a[3566] = 1;
	v->a[3567] = anon_sym_BQUOTE;
	v->a[3568] = actions(715);
	v->a[3569] = 1;
	v->a[3570] = anon_sym_DOLLAR_BQUOTE;
	v->a[3571] = actions(717);
	v->a[3572] = 1;
	v->a[3573] = sym_test_operator;
	v->a[3574] = actions(719);
	v->a[3575] = 1;
	v->a[3576] = sym__bare_dollar;
	v->a[3577] = actions(721);
	v->a[3578] = 1;
	v->a[3579] = sym__brace_start;
	small_parse_table_179(v);
}

void	small_parse_table_179(t_small_parse_table_array *v)
{
	v->a[3580] = state(284);
	v->a[3581] = 1;
	v->a[3582] = aux_sym_command_repeat2;
	v->a[3583] = state(901);
	v->a[3584] = 1;
	v->a[3585] = aux_sym__literal_repeat1;
	v->a[3586] = state(1121);
	v->a[3587] = 1;
	v->a[3588] = sym_concatenation;
	v->a[3589] = actions(689);
	v->a[3590] = 2;
	v->a[3591] = sym_raw_string;
	v->a[3592] = sym_word;
	v->a[3593] = actions(1339);
	v->a[3594] = 2;
	v->a[3595] = sym_file_descriptor;
	v->a[3596] = aux_sym_heredoc_redirect_token1;
	v->a[3597] = state(555);
	v->a[3598] = 7;
	v->a[3599] = sym_arithmetic_expansion;
	small_parse_table_180(v);
}

/* EOF small_parse_table_35.c */
