/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_366.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1830(t_small_parse_table_array *v)
{
	v->a[36600] = anon_sym_PIPE_EQ;
	v->a[36601] = 3;
	v->a[36602] = actions(3);
	v->a[36603] = 1;
	v->a[36604] = sym_comment;
	v->a[36605] = actions(1159);
	v->a[36606] = 4;
	v->a[36607] = sym_file_descriptor;
	v->a[36608] = sym__concat;
	v->a[36609] = sym__bare_dollar;
	v->a[36610] = ts_builtin_sym_end;
	v->a[36611] = actions(1157);
	v->a[36612] = 29;
	v->a[36613] = anon_sym_PIPE;
	v->a[36614] = anon_sym_SEMI_SEMI;
	v->a[36615] = anon_sym_AMP_AMP;
	v->a[36616] = anon_sym_PIPE_PIPE;
	v->a[36617] = anon_sym_LT;
	v->a[36618] = anon_sym_GT;
	v->a[36619] = anon_sym_GT_GT;
	small_parse_table_1831(v);
}

void	small_parse_table_1831(t_small_parse_table_array *v)
{
	v->a[36620] = anon_sym_AMP_GT;
	v->a[36621] = anon_sym_AMP_GT_GT;
	v->a[36622] = anon_sym_LT_AMP;
	v->a[36623] = anon_sym_GT_AMP;
	v->a[36624] = anon_sym_GT_PIPE;
	v->a[36625] = anon_sym_LT_AMP_DASH;
	v->a[36626] = anon_sym_GT_AMP_DASH;
	v->a[36627] = anon_sym_LT_LT;
	v->a[36628] = anon_sym_LT_LT_DASH;
	v->a[36629] = aux_sym_heredoc_redirect_token1;
	v->a[36630] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36631] = anon_sym_AMP;
	v->a[36632] = aux_sym_concatenation_token1;
	v->a[36633] = anon_sym_DOLLAR;
	v->a[36634] = anon_sym_DQUOTE;
	v->a[36635] = sym_raw_string;
	v->a[36636] = sym_number;
	v->a[36637] = anon_sym_DOLLAR_LBRACE;
	v->a[36638] = anon_sym_DOLLAR_LPAREN;
	v->a[36639] = anon_sym_BQUOTE;
	small_parse_table_1832(v);
}

void	small_parse_table_1832(t_small_parse_table_array *v)
{
	v->a[36640] = sym_word;
	v->a[36641] = anon_sym_SEMI;
	v->a[36642] = 12;
	v->a[36643] = actions(3);
	v->a[36644] = 1;
	v->a[36645] = sym_comment;
	v->a[36646] = actions(608);
	v->a[36647] = 1;
	v->a[36648] = sym_file_descriptor;
	v->a[36649] = actions(749);
	v->a[36650] = 1;
	v->a[36651] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36652] = actions(751);
	v->a[36653] = 1;
	v->a[36654] = anon_sym_DOLLAR;
	v->a[36655] = actions(753);
	v->a[36656] = 1;
	v->a[36657] = anon_sym_DQUOTE;
	v->a[36658] = actions(755);
	v->a[36659] = 1;
	small_parse_table_1833(v);
}

void	small_parse_table_1833(t_small_parse_table_array *v)
{
	v->a[36660] = anon_sym_DOLLAR_LBRACE;
	v->a[36661] = actions(757);
	v->a[36662] = 1;
	v->a[36663] = anon_sym_DOLLAR_LPAREN;
	v->a[36664] = actions(759);
	v->a[36665] = 1;
	v->a[36666] = anon_sym_BQUOTE;
	v->a[36667] = state(573);
	v->a[36668] = 2;
	v->a[36669] = sym_concatenation;
	v->a[36670] = aux_sym_for_statement_repeat1;
	v->a[36671] = actions(1384);
	v->a[36672] = 3;
	v->a[36673] = sym_raw_string;
	v->a[36674] = sym_number;
	v->a[36675] = sym_word;
	v->a[36676] = state(941);
	v->a[36677] = 5;
	v->a[36678] = sym_arithmetic_expansion;
	v->a[36679] = sym_string;
	small_parse_table_1834(v);
}

void	small_parse_table_1834(t_small_parse_table_array *v)
{
	v->a[36680] = sym_simple_expansion;
	v->a[36681] = sym_expansion;
	v->a[36682] = sym_command_substitution;
	v->a[36683] = actions(610);
	v->a[36684] = 16;
	v->a[36685] = anon_sym_PIPE;
	v->a[36686] = anon_sym_AMP_AMP;
	v->a[36687] = anon_sym_PIPE_PIPE;
	v->a[36688] = anon_sym_LT;
	v->a[36689] = anon_sym_GT;
	v->a[36690] = anon_sym_GT_GT;
	v->a[36691] = anon_sym_AMP_GT;
	v->a[36692] = anon_sym_AMP_GT_GT;
	v->a[36693] = anon_sym_LT_AMP;
	v->a[36694] = anon_sym_GT_AMP;
	v->a[36695] = anon_sym_GT_PIPE;
	v->a[36696] = anon_sym_LT_AMP_DASH;
	v->a[36697] = anon_sym_GT_AMP_DASH;
	v->a[36698] = anon_sym_LT_LT;
	v->a[36699] = anon_sym_LT_LT_DASH;
	small_parse_table_1835(v);
}

/* EOF small_parse_table_366.c */
