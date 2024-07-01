/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_296.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1480(t_small_parse_table_array *v)
{
	v->a[29600] = anon_sym_DOLLAR_LPAREN;
	v->a[29601] = anon_sym_BQUOTE;
	v->a[29602] = sym_word;
	v->a[29603] = anon_sym_SEMI;
	v->a[29604] = 19;
	v->a[29605] = actions(3);
	v->a[29606] = 1;
	v->a[29607] = sym_comment;
	v->a[29608] = actions(1066);
	v->a[29609] = 1;
	v->a[29610] = anon_sym_PIPE;
	v->a[29611] = actions(1074);
	v->a[29612] = 1;
	v->a[29613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29614] = actions(1076);
	v->a[29615] = 1;
	v->a[29616] = anon_sym_DOLLAR;
	v->a[29617] = actions(1078);
	v->a[29618] = 1;
	v->a[29619] = anon_sym_DQUOTE;
	small_parse_table_1481(v);
}

void	small_parse_table_1481(t_small_parse_table_array *v)
{
	v->a[29620] = actions(1080);
	v->a[29621] = 1;
	v->a[29622] = anon_sym_DOLLAR_LBRACE;
	v->a[29623] = actions(1082);
	v->a[29624] = 1;
	v->a[29625] = anon_sym_DOLLAR_LPAREN;
	v->a[29626] = actions(1084);
	v->a[29627] = 1;
	v->a[29628] = anon_sym_BQUOTE;
	v->a[29629] = actions(1086);
	v->a[29630] = 1;
	v->a[29631] = sym_file_descriptor;
	v->a[29632] = actions(1118);
	v->a[29633] = 1;
	v->a[29634] = aux_sym_heredoc_redirect_token1;
	v->a[29635] = state(1304);
	v->a[29636] = 1;
	v->a[29637] = aux_sym__heredoc_command;
	v->a[29638] = state(1721);
	v->a[29639] = 1;
	small_parse_table_1482(v);
}

void	small_parse_table_1482(t_small_parse_table_array *v)
{
	v->a[29640] = sym_concatenation;
	v->a[29641] = state(1923);
	v->a[29642] = 1;
	v->a[29643] = sym__heredoc_pipeline;
	v->a[29644] = state(1924);
	v->a[29645] = 1;
	v->a[29646] = sym__heredoc_expression;
	v->a[29647] = actions(1068);
	v->a[29648] = 2;
	v->a[29649] = anon_sym_AMP_AMP;
	v->a[29650] = anon_sym_PIPE_PIPE;
	v->a[29651] = state(1465);
	v->a[29652] = 2;
	v->a[29653] = sym_file_redirect;
	v->a[29654] = aux_sym_redirected_statement_repeat2;
	v->a[29655] = actions(1064);
	v->a[29656] = 3;
	v->a[29657] = sym_raw_string;
	v->a[29658] = sym_number;
	v->a[29659] = sym_word;
	small_parse_table_1483(v);
}

void	small_parse_table_1483(t_small_parse_table_array *v)
{
	v->a[29660] = state(1573);
	v->a[29661] = 5;
	v->a[29662] = sym_arithmetic_expansion;
	v->a[29663] = sym_string;
	v->a[29664] = sym_simple_expansion;
	v->a[29665] = sym_expansion;
	v->a[29666] = sym_command_substitution;
	v->a[29667] = actions(1070);
	v->a[29668] = 7;
	v->a[29669] = anon_sym_LT;
	v->a[29670] = anon_sym_GT;
	v->a[29671] = anon_sym_GT_GT;
	v->a[29672] = anon_sym_LT_AMP;
	v->a[29673] = anon_sym_GT_AMP;
	v->a[29674] = anon_sym_GT_PIPE;
	v->a[29675] = anon_sym_LT_GT;
	v->a[29676] = 7;
	v->a[29677] = actions(3);
	v->a[29678] = 1;
	v->a[29679] = sym_comment;
	small_parse_table_1484(v);
}

void	small_parse_table_1484(t_small_parse_table_array *v)
{
	v->a[29680] = actions(1112);
	v->a[29681] = 1;
	v->a[29682] = aux_sym_concatenation_token1;
	v->a[29683] = actions(1116);
	v->a[29684] = 1;
	v->a[29685] = sym__concat;
	v->a[29686] = actions(1120);
	v->a[29687] = 1;
	v->a[29688] = anon_sym_LPAREN;
	v->a[29689] = state(357);
	v->a[29690] = 1;
	v->a[29691] = aux_sym_concatenation_repeat1;
	v->a[29692] = actions(1055);
	v->a[29693] = 2;
	v->a[29694] = sym_file_descriptor;
	v->a[29695] = sym__bare_dollar;
	v->a[29696] = actions(1057);
	v->a[29697] = 26;
	v->a[29698] = anon_sym_esac;
	v->a[29699] = anon_sym_PIPE;
	small_parse_table_1485(v);
}

/* EOF small_parse_table_296.c */
