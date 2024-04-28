/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_370.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1850(t_small_parse_table_array *v)
{
	v->a[37000] = actions(4820);
	v->a[37001] = 1;
	v->a[37002] = anon_sym_DOLLAR_LBRACK;
	v->a[37003] = actions(4822);
	v->a[37004] = 1;
	v->a[37005] = anon_sym_DOLLAR;
	v->a[37006] = actions(4824);
	v->a[37007] = 1;
	v->a[37008] = sym__special_character;
	v->a[37009] = actions(4826);
	v->a[37010] = 1;
	v->a[37011] = anon_sym_DQUOTE;
	v->a[37012] = actions(4830);
	v->a[37013] = 1;
	v->a[37014] = aux_sym_number_token1;
	v->a[37015] = actions(4832);
	v->a[37016] = 1;
	v->a[37017] = aux_sym_number_token2;
	v->a[37018] = actions(4834);
	v->a[37019] = 1;
	small_parse_table_1851(v);
}

void	small_parse_table_1851(t_small_parse_table_array *v)
{
	v->a[37020] = anon_sym_DOLLAR_LBRACE;
	v->a[37021] = actions(4836);
	v->a[37022] = 1;
	v->a[37023] = anon_sym_DOLLAR_LPAREN;
	v->a[37024] = actions(4838);
	v->a[37025] = 1;
	v->a[37026] = anon_sym_BQUOTE;
	v->a[37027] = actions(4840);
	v->a[37028] = 1;
	v->a[37029] = anon_sym_DOLLAR_BQUOTE;
	v->a[37030] = actions(4846);
	v->a[37031] = 1;
	v->a[37032] = sym_test_operator;
	v->a[37033] = actions(4848);
	v->a[37034] = 1;
	v->a[37035] = sym__brace_start;
	v->a[37036] = actions(4877);
	v->a[37037] = 1;
	v->a[37038] = aux_sym__simple_variable_name_token1;
	v->a[37039] = state(2939);
	small_parse_table_1852(v);
}

void	small_parse_table_1852(t_small_parse_table_array *v)
{
	v->a[37040] = 1;
	v->a[37041] = aux_sym__literal_repeat1;
	v->a[37042] = actions(4818);
	v->a[37043] = 2;
	v->a[37044] = anon_sym_LPAREN_LPAREN;
	v->a[37045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37046] = actions(4828);
	v->a[37047] = 2;
	v->a[37048] = sym_raw_string;
	v->a[37049] = sym_ansi_c_string;
	v->a[37050] = actions(4842);
	v->a[37051] = 2;
	v->a[37052] = anon_sym_LT_LPAREN;
	v->a[37053] = anon_sym_GT_LPAREN;
	v->a[37054] = state(979);
	v->a[37055] = 2;
	v->a[37056] = sym_concatenation;
	v->a[37057] = aux_sym_unset_command_repeat1;
	v->a[37058] = actions(2562);
	v->a[37059] = 7;
	small_parse_table_1853(v);
}

void	small_parse_table_1853(t_small_parse_table_array *v)
{
	v->a[37060] = anon_sym_PIPE;
	v->a[37061] = anon_sym_LT;
	v->a[37062] = anon_sym_GT;
	v->a[37063] = anon_sym_LT_LT;
	v->a[37064] = anon_sym_AMP_GT;
	v->a[37065] = anon_sym_LT_AMP;
	v->a[37066] = anon_sym_GT_AMP;
	v->a[37067] = state(2539);
	v->a[37068] = 9;
	v->a[37069] = sym_arithmetic_expansion;
	v->a[37070] = sym_brace_expression;
	v->a[37071] = sym_string;
	v->a[37072] = sym_translated_string;
	v->a[37073] = sym_number;
	v->a[37074] = sym_simple_expansion;
	v->a[37075] = sym_expansion;
	v->a[37076] = sym_command_substitution;
	v->a[37077] = sym_process_substitution;
	v->a[37078] = actions(2564);
	v->a[37079] = 10;
	small_parse_table_1854(v);
}

void	small_parse_table_1854(t_small_parse_table_array *v)
{
	v->a[37080] = sym_file_descriptor;
	v->a[37081] = anon_sym_PIPE_PIPE;
	v->a[37082] = anon_sym_AMP_AMP;
	v->a[37083] = anon_sym_GT_GT;
	v->a[37084] = anon_sym_PIPE_AMP;
	v->a[37085] = anon_sym_AMP_GT_GT;
	v->a[37086] = anon_sym_GT_PIPE;
	v->a[37087] = anon_sym_LT_AMP_DASH;
	v->a[37088] = anon_sym_GT_AMP_DASH;
	v->a[37089] = anon_sym_LT_LT_DASH;
	v->a[37090] = 3;
	v->a[37091] = actions(3);
	v->a[37092] = 1;
	v->a[37093] = sym_comment;
	v->a[37094] = actions(1298);
	v->a[37095] = 6;
	v->a[37096] = sym_file_descriptor;
	v->a[37097] = sym__concat;
	v->a[37098] = sym_test_operator;
	v->a[37099] = sym__bare_dollar;
	small_parse_table_1855(v);
}

/* EOF small_parse_table_370.c */
