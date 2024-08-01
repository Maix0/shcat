/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_216.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1080(t_small_parse_table_array *v)
{
	v->a[21600] = anon_sym_PIPE_PIPE;
	v->a[21601] = anon_sym_LT;
	v->a[21602] = anon_sym_GT;
	v->a[21603] = anon_sym_GT_GT;
	v->a[21604] = anon_sym_LT_LT;
	v->a[21605] = 3;
	v->a[21606] = actions(3);
	v->a[21607] = 1;
	v->a[21608] = sym_comment;
	v->a[21609] = actions(869);
	v->a[21610] = 1;
	v->a[21611] = sym_variable_name;
	v->a[21612] = actions(867);
	v->a[21613] = 23;
	v->a[21614] = anon_sym_for;
	v->a[21615] = anon_sym_while;
	v->a[21616] = anon_sym_until;
	v->a[21617] = anon_sym_if;
	v->a[21618] = anon_sym_fi;
	v->a[21619] = anon_sym_elif;
	small_parse_table_1081(v);
}

void	small_parse_table_1081(t_small_parse_table_array *v)
{
	v->a[21620] = anon_sym_else;
	v->a[21621] = anon_sym_case;
	v->a[21622] = anon_sym_LPAREN;
	v->a[21623] = anon_sym_LBRACE;
	v->a[21624] = anon_sym_BANG;
	v->a[21625] = anon_sym_LT;
	v->a[21626] = anon_sym_GT;
	v->a[21627] = anon_sym_GT_GT;
	v->a[21628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21629] = anon_sym_DOLLAR;
	v->a[21630] = anon_sym_DQUOTE;
	v->a[21631] = sym_raw_string;
	v->a[21632] = sym_number;
	v->a[21633] = anon_sym_DOLLAR_LBRACE;
	v->a[21634] = anon_sym_DOLLAR_LPAREN;
	v->a[21635] = anon_sym_BQUOTE;
	v->a[21636] = sym_word;
	v->a[21637] = 6;
	v->a[21638] = actions(3);
	v->a[21639] = 1;
	small_parse_table_1082(v);
}

void	small_parse_table_1082(t_small_parse_table_array *v)
{
	v->a[21640] = sym_comment;
	v->a[21641] = actions(882);
	v->a[21642] = 1;
	v->a[21643] = aux_sym_concatenation_token1;
	v->a[21644] = actions(884);
	v->a[21645] = 1;
	v->a[21646] = sym__concat;
	v->a[21647] = state(291);
	v->a[21648] = 1;
	v->a[21649] = aux_sym_concatenation_repeat1;
	v->a[21650] = actions(917);
	v->a[21651] = 2;
	v->a[21652] = sym_variable_name;
	v->a[21653] = ts_builtin_sym_end;
	v->a[21654] = actions(919);
	v->a[21655] = 19;
	v->a[21656] = anon_sym_PIPE;
	v->a[21657] = anon_sym_SEMI_SEMI;
	v->a[21658] = anon_sym_AMP_AMP;
	v->a[21659] = anon_sym_PIPE_PIPE;
	small_parse_table_1083(v);
}

void	small_parse_table_1083(t_small_parse_table_array *v)
{
	v->a[21660] = anon_sym_LT;
	v->a[21661] = anon_sym_GT;
	v->a[21662] = anon_sym_GT_GT;
	v->a[21663] = anon_sym_LT_LT;
	v->a[21664] = aux_sym_heredoc_redirect_token1;
	v->a[21665] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21666] = anon_sym_DOLLAR;
	v->a[21667] = anon_sym_DQUOTE;
	v->a[21668] = sym_raw_string;
	v->a[21669] = sym_number;
	v->a[21670] = anon_sym_DOLLAR_LBRACE;
	v->a[21671] = anon_sym_DOLLAR_LPAREN;
	v->a[21672] = anon_sym_BQUOTE;
	v->a[21673] = sym_word;
	v->a[21674] = anon_sym_SEMI;
	v->a[21675] = 6;
	v->a[21676] = actions(3);
	v->a[21677] = 1;
	v->a[21678] = sym_comment;
	v->a[21679] = actions(851);
	small_parse_table_1084(v);
}

void	small_parse_table_1084(t_small_parse_table_array *v)
{
	v->a[21680] = 1;
	v->a[21681] = aux_sym_concatenation_token1;
	v->a[21682] = actions(925);
	v->a[21683] = 1;
	v->a[21684] = sym__concat;
	v->a[21685] = state(271);
	v->a[21686] = 1;
	v->a[21687] = aux_sym_concatenation_repeat1;
	v->a[21688] = actions(921);
	v->a[21689] = 2;
	v->a[21690] = sym__bare_dollar;
	v->a[21691] = ts_builtin_sym_end;
	v->a[21692] = actions(923);
	v->a[21693] = 19;
	v->a[21694] = anon_sym_PIPE;
	v->a[21695] = anon_sym_SEMI_SEMI;
	v->a[21696] = anon_sym_AMP_AMP;
	v->a[21697] = anon_sym_PIPE_PIPE;
	v->a[21698] = anon_sym_LT;
	v->a[21699] = anon_sym_GT;
	small_parse_table_1085(v);
}

/* EOF small_parse_table_216.c */
