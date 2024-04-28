/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2770.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13850(t_small_parse_table_array *v)
{
	v->a[277000] = anon_sym_AMP_GT_GT;
	v->a[277001] = anon_sym_GT_PIPE;
	v->a[277002] = anon_sym_LT_AMP_DASH;
	v->a[277003] = anon_sym_GT_AMP_DASH;
	v->a[277004] = anon_sym_LT_LT_DASH;
	v->a[277005] = anon_sym_LT_LT_LT;
	v->a[277006] = 8;
	v->a[277007] = actions(3);
	v->a[277008] = 1;
	v->a[277009] = sym_comment;
	v->a[277010] = actions(11363);
	v->a[277011] = 1;
	v->a[277012] = aux_sym_heredoc_redirect_token1;
	v->a[277013] = actions(12443);
	v->a[277014] = 1;
	v->a[277015] = anon_sym_LT_LT_LT;
	v->a[277016] = actions(12445);
	v->a[277017] = 1;
	v->a[277018] = sym_file_descriptor;
	v->a[277019] = actions(12441);
	small_parse_table_13851(v);
}

void	small_parse_table_13851(t_small_parse_table_array *v)
{
	v->a[277020] = 2;
	v->a[277021] = anon_sym_LT_AMP_DASH;
	v->a[277022] = anon_sym_GT_AMP_DASH;
	v->a[277023] = state(5181);
	v->a[277024] = 3;
	v->a[277025] = sym_file_redirect;
	v->a[277026] = sym_herestring_redirect;
	v->a[277027] = aux_sym_redirected_statement_repeat2;
	v->a[277028] = actions(11357);
	v->a[277029] = 6;
	v->a[277030] = anon_sym_PIPE_PIPE;
	v->a[277031] = anon_sym_AMP_AMP;
	v->a[277032] = anon_sym_PIPE;
	v->a[277033] = anon_sym_LT_LT;
	v->a[277034] = anon_sym_PIPE_AMP;
	v->a[277035] = anon_sym_LT_LT_DASH;
	v->a[277036] = actions(12439);
	v->a[277037] = 8;
	v->a[277038] = anon_sym_LT;
	v->a[277039] = anon_sym_GT;
	small_parse_table_13852(v);
}

void	small_parse_table_13852(t_small_parse_table_array *v)
{
	v->a[277040] = anon_sym_GT_GT;
	v->a[277041] = anon_sym_AMP_GT;
	v->a[277042] = anon_sym_AMP_GT_GT;
	v->a[277043] = anon_sym_LT_AMP;
	v->a[277044] = anon_sym_GT_AMP;
	v->a[277045] = anon_sym_GT_PIPE;
	v->a[277046] = 4;
	v->a[277047] = actions(71);
	v->a[277048] = 1;
	v->a[277049] = sym_comment;
	v->a[277050] = actions(12451);
	v->a[277051] = 1;
	v->a[277052] = anon_sym_esac;
	v->a[277053] = actions(12447);
	v->a[277054] = 6;
	v->a[277055] = anon_sym_LPAREN;
	v->a[277056] = anon_sym_DOLLAR;
	v->a[277057] = aux_sym_number_token1;
	v->a[277058] = aux_sym_number_token2;
	v->a[277059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_13853(v);
}

void	small_parse_table_13853(t_small_parse_table_array *v)
{
	v->a[277060] = sym_word;
	v->a[277061] = actions(12449);
	v->a[277062] = 15;
	v->a[277063] = sym_test_operator;
	v->a[277064] = sym_extglob_pattern;
	v->a[277065] = sym__brace_start;
	v->a[277066] = anon_sym_LPAREN_LPAREN;
	v->a[277067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[277068] = anon_sym_DOLLAR_LBRACK;
	v->a[277069] = sym__special_character;
	v->a[277070] = anon_sym_DQUOTE;
	v->a[277071] = sym_raw_string;
	v->a[277072] = sym_ansi_c_string;
	v->a[277073] = anon_sym_DOLLAR_LBRACE;
	v->a[277074] = anon_sym_BQUOTE;
	v->a[277075] = anon_sym_DOLLAR_BQUOTE;
	v->a[277076] = anon_sym_LT_LPAREN;
	v->a[277077] = anon_sym_GT_LPAREN;
	v->a[277078] = 5;
	v->a[277079] = actions(71);
	small_parse_table_13854(v);
}

void	small_parse_table_13854(t_small_parse_table_array *v)
{
	v->a[277080] = 1;
	v->a[277081] = sym_comment;
	v->a[277082] = state(5180);
	v->a[277083] = 1;
	v->a[277084] = aux_sym_concatenation_repeat1;
	v->a[277085] = actions(12327);
	v->a[277086] = 2;
	v->a[277087] = sym__concat;
	v->a[277088] = aux_sym_concatenation_token1;
	v->a[277089] = actions(2072);
	v->a[277090] = 7;
	v->a[277091] = anon_sym_PIPE;
	v->a[277092] = anon_sym_LT;
	v->a[277093] = anon_sym_GT;
	v->a[277094] = anon_sym_LT_LT;
	v->a[277095] = anon_sym_AMP_GT;
	v->a[277096] = anon_sym_LT_AMP;
	v->a[277097] = anon_sym_GT_AMP;
	v->a[277098] = actions(2074);
	v->a[277099] = 12;
	small_parse_table_13855(v);
}

/* EOF small_parse_table_2770.c */
