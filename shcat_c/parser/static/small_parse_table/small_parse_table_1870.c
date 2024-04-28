/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1870.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9350(t_small_parse_table_array *v)
{
	v->a[187000] = actions(3);
	v->a[187001] = 1;
	v->a[187002] = sym_comment;
	v->a[187003] = actions(3729);
	v->a[187004] = 1;
	v->a[187005] = anon_sym_DOLLAR_LBRACK;
	v->a[187006] = actions(3731);
	v->a[187007] = 1;
	v->a[187008] = anon_sym_DOLLAR;
	v->a[187009] = actions(3735);
	v->a[187010] = 1;
	v->a[187011] = anon_sym_DQUOTE;
	v->a[187012] = actions(3737);
	v->a[187013] = 1;
	v->a[187014] = aux_sym_number_token1;
	v->a[187015] = actions(3739);
	v->a[187016] = 1;
	v->a[187017] = aux_sym_number_token2;
	v->a[187018] = actions(3741);
	v->a[187019] = 1;
	small_parse_table_9351(v);
}

void	small_parse_table_9351(t_small_parse_table_array *v)
{
	v->a[187020] = anon_sym_DOLLAR_LBRACE;
	v->a[187021] = actions(3743);
	v->a[187022] = 1;
	v->a[187023] = anon_sym_DOLLAR_LPAREN;
	v->a[187024] = actions(3745);
	v->a[187025] = 1;
	v->a[187026] = anon_sym_BQUOTE;
	v->a[187027] = actions(3747);
	v->a[187028] = 1;
	v->a[187029] = anon_sym_DOLLAR_BQUOTE;
	v->a[187030] = actions(3755);
	v->a[187031] = 1;
	v->a[187032] = sym__brace_start;
	v->a[187033] = actions(7765);
	v->a[187034] = 1;
	v->a[187035] = sym__special_character;
	v->a[187036] = actions(7767);
	v->a[187037] = 1;
	v->a[187038] = sym_test_operator;
	v->a[187039] = actions(7773);
	small_parse_table_9352(v);
}

void	small_parse_table_9352(t_small_parse_table_array *v)
{
	v->a[187040] = 1;
	v->a[187041] = aux_sym_heredoc_redirect_token1;
	v->a[187042] = state(4975);
	v->a[187043] = 1;
	v->a[187044] = aux_sym__literal_repeat1;
	v->a[187045] = actions(3715);
	v->a[187046] = 2;
	v->a[187047] = anon_sym_LPAREN_LPAREN;
	v->a[187048] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[187049] = actions(3749);
	v->a[187050] = 2;
	v->a[187051] = anon_sym_LT_LPAREN;
	v->a[187052] = anon_sym_GT_LPAREN;
	v->a[187053] = state(3478);
	v->a[187054] = 2;
	v->a[187055] = sym_concatenation;
	v->a[187056] = aux_sym_for_statement_repeat1;
	v->a[187057] = actions(7759);
	v->a[187058] = 3;
	v->a[187059] = sym_raw_string;
	small_parse_table_9353(v);
}

void	small_parse_table_9353(t_small_parse_table_array *v)
{
	v->a[187060] = sym_ansi_c_string;
	v->a[187061] = sym_word;
	v->a[187062] = actions(7771);
	v->a[187063] = 3;
	v->a[187064] = anon_sym_SEMI;
	v->a[187065] = anon_sym_AMP;
	v->a[187066] = anon_sym_SEMI_SEMI;
	v->a[187067] = state(4460);
	v->a[187068] = 9;
	v->a[187069] = sym_arithmetic_expansion;
	v->a[187070] = sym_brace_expression;
	v->a[187071] = sym_string;
	v->a[187072] = sym_translated_string;
	v->a[187073] = sym_number;
	v->a[187074] = sym_simple_expansion;
	v->a[187075] = sym_expansion;
	v->a[187076] = sym_command_substitution;
	v->a[187077] = sym_process_substitution;
	v->a[187078] = 6;
	v->a[187079] = actions(71);
	small_parse_table_9354(v);
}

void	small_parse_table_9354(t_small_parse_table_array *v)
{
	v->a[187080] = 1;
	v->a[187081] = sym_comment;
	v->a[187082] = actions(7751);
	v->a[187083] = 1;
	v->a[187084] = aux_sym_concatenation_token1;
	v->a[187085] = actions(7775);
	v->a[187086] = 1;
	v->a[187087] = sym__concat;
	v->a[187088] = state(3468);
	v->a[187089] = 1;
	v->a[187090] = aux_sym_concatenation_repeat1;
	v->a[187091] = actions(1286);
	v->a[187092] = 11;
	v->a[187093] = anon_sym_LT;
	v->a[187094] = anon_sym_GT;
	v->a[187095] = anon_sym_AMP_GT;
	v->a[187096] = anon_sym_LT_AMP;
	v->a[187097] = anon_sym_GT_AMP;
	v->a[187098] = anon_sym_DOLLAR;
	v->a[187099] = aux_sym_number_token1;
	small_parse_table_9355(v);
}

/* EOF small_parse_table_1870.c */
