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
	v->a[36600] = anon_sym_AMP;
	v->a[36601] = aux_sym_concatenation_token1;
	v->a[36602] = anon_sym_DOLLAR;
	v->a[36603] = anon_sym_DQUOTE;
	v->a[36604] = sym_raw_string;
	v->a[36605] = sym_number;
	v->a[36606] = anon_sym_DOLLAR_LBRACE;
	v->a[36607] = anon_sym_DOLLAR_LPAREN;
	v->a[36608] = anon_sym_BQUOTE;
	v->a[36609] = sym_word;
	v->a[36610] = anon_sym_SEMI;
	v->a[36611] = 21;
	v->a[36612] = actions(3);
	v->a[36613] = 1;
	v->a[36614] = sym_comment;
	v->a[36615] = actions(335);
	v->a[36616] = 1;
	v->a[36617] = anon_sym_LPAREN;
	v->a[36618] = actions(345);
	v->a[36619] = 1;
	small_parse_table_1831(v);
}

void	small_parse_table_1831(t_small_parse_table_array *v)
{
	v->a[36620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36621] = actions(347);
	v->a[36622] = 1;
	v->a[36623] = anon_sym_DOLLAR;
	v->a[36624] = actions(349);
	v->a[36625] = 1;
	v->a[36626] = anon_sym_DQUOTE;
	v->a[36627] = actions(353);
	v->a[36628] = 1;
	v->a[36629] = anon_sym_DOLLAR_LBRACE;
	v->a[36630] = actions(355);
	v->a[36631] = 1;
	v->a[36632] = anon_sym_DOLLAR_LPAREN;
	v->a[36633] = actions(357);
	v->a[36634] = 1;
	v->a[36635] = anon_sym_BQUOTE;
	v->a[36636] = actions(361);
	v->a[36637] = 1;
	v->a[36638] = sym_variable_name;
	v->a[36639] = actions(1256);
	small_parse_table_1832(v);
}

void	small_parse_table_1832(t_small_parse_table_array *v)
{
	v->a[36640] = 1;
	v->a[36641] = sym_file_descriptor;
	v->a[36642] = state(387);
	v->a[36643] = 1;
	v->a[36644] = sym_command_name;
	v->a[36645] = state(737);
	v->a[36646] = 1;
	v->a[36647] = aux_sym_command_repeat1;
	v->a[36648] = state(975);
	v->a[36649] = 1;
	v->a[36650] = sym_concatenation;
	v->a[36651] = state(992);
	v->a[36652] = 1;
	v->a[36653] = sym_variable_assignment;
	v->a[36654] = state(1385);
	v->a[36655] = 1;
	v->a[36656] = sym_file_redirect;
	v->a[36657] = state(1663);
	v->a[36658] = 1;
	v->a[36659] = sym_subshell;
	small_parse_table_1833(v);
}

void	small_parse_table_1833(t_small_parse_table_array *v)
{
	v->a[36660] = state(1665);
	v->a[36661] = 1;
	v->a[36662] = sym_command;
	v->a[36663] = actions(1254);
	v->a[36664] = 2;
	v->a[36665] = anon_sym_LT_AMP_DASH;
	v->a[36666] = anon_sym_GT_AMP_DASH;
	v->a[36667] = actions(351);
	v->a[36668] = 3;
	v->a[36669] = sym_raw_string;
	v->a[36670] = sym_number;
	v->a[36671] = sym_word;
	v->a[36672] = state(785);
	v->a[36673] = 5;
	v->a[36674] = sym_arithmetic_expansion;
	v->a[36675] = sym_string;
	v->a[36676] = sym_simple_expansion;
	v->a[36677] = sym_expansion;
	v->a[36678] = sym_command_substitution;
	v->a[36679] = actions(1252);
	small_parse_table_1834(v);
}

void	small_parse_table_1834(t_small_parse_table_array *v)
{
	v->a[36680] = 6;
	v->a[36681] = anon_sym_LT;
	v->a[36682] = anon_sym_GT;
	v->a[36683] = anon_sym_GT_GT;
	v->a[36684] = anon_sym_LT_AMP;
	v->a[36685] = anon_sym_GT_AMP;
	v->a[36686] = anon_sym_GT_PIPE;
	v->a[36687] = 6;
	v->a[36688] = actions(3);
	v->a[36689] = 1;
	v->a[36690] = sym_comment;
	v->a[36691] = actions(1330);
	v->a[36692] = 1;
	v->a[36693] = aux_sym_concatenation_token1;
	v->a[36694] = actions(1334);
	v->a[36695] = 1;
	v->a[36696] = sym__concat;
	v->a[36697] = state(429);
	v->a[36698] = 1;
	v->a[36699] = aux_sym_concatenation_repeat1;
	small_parse_table_1835(v);
}

/* EOF small_parse_table_366.c */
