/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_256.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1280(t_small_parse_table_array *v)
{
	v->a[25600] = 1;
	v->a[25601] = sym_variable_name;
	v->a[25602] = state(325);
	v->a[25603] = 2;
	v->a[25604] = sym_concatenation;
	v->a[25605] = aux_sym_for_statement_repeat1;
	v->a[25606] = state(604);
	v->a[25607] = 5;
	v->a[25608] = sym_arithmetic_expansion;
	v->a[25609] = sym_string;
	v->a[25610] = sym_simple_expansion;
	v->a[25611] = sym_expansion;
	v->a[25612] = sym_command_substitution;
	v->a[25613] = actions(487);
	v->a[25614] = 22;
	v->a[25615] = anon_sym_PIPE;
	v->a[25616] = anon_sym_AMP_AMP;
	v->a[25617] = anon_sym_PIPE_PIPE;
	v->a[25618] = anon_sym_LT;
	v->a[25619] = anon_sym_GT;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = anon_sym_GT_GT;
	v->a[25621] = anon_sym_LT_AMP;
	v->a[25622] = anon_sym_GT_AMP;
	v->a[25623] = anon_sym_GT_PIPE;
	v->a[25624] = anon_sym_LT_GT;
	v->a[25625] = anon_sym_LT_LT;
	v->a[25626] = anon_sym_LT_LT_DASH;
	v->a[25627] = aux_sym_heredoc_redirect_token1;
	v->a[25628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25629] = anon_sym_DOLLAR;
	v->a[25630] = anon_sym_DQUOTE;
	v->a[25631] = sym_raw_string;
	v->a[25632] = sym_number;
	v->a[25633] = anon_sym_DOLLAR_LBRACE;
	v->a[25634] = anon_sym_DOLLAR_LPAREN;
	v->a[25635] = anon_sym_BQUOTE;
	v->a[25636] = sym_word;
	v->a[25637] = 19;
	v->a[25638] = actions(3);
	v->a[25639] = 1;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = sym_comment;
	v->a[25641] = actions(317);
	v->a[25642] = 1;
	v->a[25643] = anon_sym_LPAREN;
	v->a[25644] = actions(325);
	v->a[25645] = 1;
	v->a[25646] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25647] = actions(327);
	v->a[25648] = 1;
	v->a[25649] = anon_sym_DOLLAR;
	v->a[25650] = actions(329);
	v->a[25651] = 1;
	v->a[25652] = anon_sym_DQUOTE;
	v->a[25653] = actions(333);
	v->a[25654] = 1;
	v->a[25655] = anon_sym_DOLLAR_LBRACE;
	v->a[25656] = actions(335);
	v->a[25657] = 1;
	v->a[25658] = anon_sym_DOLLAR_LPAREN;
	v->a[25659] = actions(337);
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = 1;
	v->a[25661] = anon_sym_BQUOTE;
	v->a[25662] = actions(339);
	v->a[25663] = 1;
	v->a[25664] = sym_variable_name;
	v->a[25665] = state(342);
	v->a[25666] = 1;
	v->a[25667] = sym_command_name;
	v->a[25668] = state(489);
	v->a[25669] = 1;
	v->a[25670] = aux_sym_command_repeat1;
	v->a[25671] = state(728);
	v->a[25672] = 1;
	v->a[25673] = sym_variable_assignment;
	v->a[25674] = state(732);
	v->a[25675] = 1;
	v->a[25676] = sym_concatenation;
	v->a[25677] = state(1073);
	v->a[25678] = 1;
	v->a[25679] = sym_file_redirect;
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = state(1311);
	v->a[25681] = 1;
	v->a[25682] = sym_subshell;
	v->a[25683] = state(1312);
	v->a[25684] = 1;
	v->a[25685] = sym_command;
	v->a[25686] = actions(331);
	v->a[25687] = 3;
	v->a[25688] = sym_raw_string;
	v->a[25689] = sym_number;
	v->a[25690] = sym_word;
	v->a[25691] = state(635);
	v->a[25692] = 5;
	v->a[25693] = sym_arithmetic_expansion;
	v->a[25694] = sym_string;
	v->a[25695] = sym_simple_expansion;
	v->a[25696] = sym_expansion;
	v->a[25697] = sym_command_substitution;
	v->a[25698] = actions(965);
	v->a[25699] = 7;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
