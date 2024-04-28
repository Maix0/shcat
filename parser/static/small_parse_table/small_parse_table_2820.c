/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2820.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14100(t_small_parse_table_array *v)
{
	v->a[282000] = aux_sym_concatenation_repeat1;
	v->a[282001] = actions(1265);
	v->a[282002] = 7;
	v->a[282003] = anon_sym_PIPE;
	v->a[282004] = anon_sym_LT;
	v->a[282005] = anon_sym_GT;
	v->a[282006] = anon_sym_LT_LT;
	v->a[282007] = anon_sym_AMP_GT;
	v->a[282008] = anon_sym_LT_AMP;
	v->a[282009] = anon_sym_GT_AMP;
	v->a[282010] = actions(1267);
	v->a[282011] = 11;
	v->a[282012] = sym_file_descriptor;
	v->a[282013] = sym_variable_name;
	v->a[282014] = anon_sym_PIPE_PIPE;
	v->a[282015] = anon_sym_AMP_AMP;
	v->a[282016] = anon_sym_GT_GT;
	v->a[282017] = anon_sym_PIPE_AMP;
	v->a[282018] = anon_sym_AMP_GT_GT;
	v->a[282019] = anon_sym_GT_PIPE;
	small_parse_table_14101(v);
}

void	small_parse_table_14101(t_small_parse_table_array *v)
{
	v->a[282020] = anon_sym_LT_AMP_DASH;
	v->a[282021] = anon_sym_GT_AMP_DASH;
	v->a[282022] = anon_sym_LT_LT_DASH;
	v->a[282023] = 3;
	v->a[282024] = actions(71);
	v->a[282025] = 1;
	v->a[282026] = sym_comment;
	v->a[282027] = actions(1320);
	v->a[282028] = 7;
	v->a[282029] = anon_sym_PIPE;
	v->a[282030] = anon_sym_LT;
	v->a[282031] = anon_sym_GT;
	v->a[282032] = anon_sym_LT_LT;
	v->a[282033] = anon_sym_AMP_GT;
	v->a[282034] = anon_sym_LT_AMP;
	v->a[282035] = anon_sym_GT_AMP;
	v->a[282036] = actions(1322);
	v->a[282037] = 14;
	v->a[282038] = sym_file_descriptor;
	v->a[282039] = sym__concat;
	small_parse_table_14102(v);
}

void	small_parse_table_14102(t_small_parse_table_array *v)
{
	v->a[282040] = anon_sym_PIPE_PIPE;
	v->a[282041] = anon_sym_AMP_AMP;
	v->a[282042] = anon_sym_GT_GT;
	v->a[282043] = anon_sym_PIPE_AMP;
	v->a[282044] = anon_sym_RBRACK;
	v->a[282045] = anon_sym_AMP_GT_GT;
	v->a[282046] = anon_sym_GT_PIPE;
	v->a[282047] = anon_sym_LT_AMP_DASH;
	v->a[282048] = anon_sym_GT_AMP_DASH;
	v->a[282049] = anon_sym_LT_LT_DASH;
	v->a[282050] = anon_sym_LT_LT_LT;
	v->a[282051] = aux_sym_concatenation_token1;
	v->a[282052] = 3;
	v->a[282053] = actions(71);
	v->a[282054] = 1;
	v->a[282055] = sym_comment;
	v->a[282056] = actions(12690);
	v->a[282057] = 6;
	v->a[282058] = anon_sym_LPAREN;
	v->a[282059] = anon_sym_DOLLAR;
	small_parse_table_14103(v);
}

void	small_parse_table_14103(t_small_parse_table_array *v)
{
	v->a[282060] = aux_sym_number_token1;
	v->a[282061] = aux_sym_number_token2;
	v->a[282062] = anon_sym_DOLLAR_LPAREN;
	v->a[282063] = sym_word;
	v->a[282064] = actions(12692);
	v->a[282065] = 15;
	v->a[282066] = sym_test_operator;
	v->a[282067] = sym_extglob_pattern;
	v->a[282068] = sym__brace_start;
	v->a[282069] = anon_sym_LPAREN_LPAREN;
	v->a[282070] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282071] = anon_sym_DOLLAR_LBRACK;
	v->a[282072] = sym__special_character;
	v->a[282073] = anon_sym_DQUOTE;
	v->a[282074] = sym_raw_string;
	v->a[282075] = sym_ansi_c_string;
	v->a[282076] = anon_sym_DOLLAR_LBRACE;
	v->a[282077] = anon_sym_BQUOTE;
	v->a[282078] = anon_sym_DOLLAR_BQUOTE;
	v->a[282079] = anon_sym_LT_LPAREN;
	small_parse_table_14104(v);
}

void	small_parse_table_14104(t_small_parse_table_array *v)
{
	v->a[282080] = anon_sym_GT_LPAREN;
	v->a[282081] = 5;
	v->a[282082] = actions(71);
	v->a[282083] = 1;
	v->a[282084] = sym_comment;
	v->a[282085] = state(5271);
	v->a[282086] = 1;
	v->a[282087] = aux_sym_concatenation_repeat1;
	v->a[282088] = actions(12622);
	v->a[282089] = 2;
	v->a[282090] = sym__concat;
	v->a[282091] = aux_sym_concatenation_token1;
	v->a[282092] = actions(4370);
	v->a[282093] = 7;
	v->a[282094] = anon_sym_PIPE;
	v->a[282095] = anon_sym_LT;
	v->a[282096] = anon_sym_GT;
	v->a[282097] = anon_sym_LT_LT;
	v->a[282098] = anon_sym_AMP_GT;
	v->a[282099] = anon_sym_LT_AMP;
	small_parse_table_14105(v);
}

/* EOF small_parse_table_2820.c */
