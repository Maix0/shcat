/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_506.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2530(t_small_parse_table_array *v)
{
	v->a[50600] = anon_sym_LT_AMP;
	v->a[50601] = anon_sym_GT_AMP;
	v->a[50602] = anon_sym_GT_PIPE;
	v->a[50603] = anon_sym_LT_AMP_DASH;
	v->a[50604] = anon_sym_GT_AMP_DASH;
	v->a[50605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50606] = anon_sym_DOLLAR;
	v->a[50607] = anon_sym_DQUOTE;
	v->a[50608] = sym_raw_string;
	v->a[50609] = sym_number;
	v->a[50610] = anon_sym_DOLLAR_LBRACE;
	v->a[50611] = anon_sym_DOLLAR_LPAREN;
	v->a[50612] = anon_sym_BQUOTE;
	v->a[50613] = sym_word;
	v->a[50614] = 7;
	v->a[50615] = actions(3);
	v->a[50616] = 1;
	v->a[50617] = sym_comment;
	v->a[50618] = actions(1565);
	v->a[50619] = 1;
	small_parse_table_2531(v);
}

void	small_parse_table_2531(t_small_parse_table_array *v)
{
	v->a[50620] = sym_file_descriptor;
	v->a[50621] = actions(1568);
	v->a[50622] = 1;
	v->a[50623] = sym_variable_name;
	v->a[50624] = actions(1668);
	v->a[50625] = 1;
	v->a[50626] = anon_sym_RPAREN;
	v->a[50627] = actions(1558);
	v->a[50628] = 9;
	v->a[50629] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50630] = anon_sym_DOLLAR;
	v->a[50631] = anon_sym_DQUOTE;
	v->a[50632] = sym_raw_string;
	v->a[50633] = sym_number;
	v->a[50634] = anon_sym_DOLLAR_LBRACE;
	v->a[50635] = anon_sym_DOLLAR_LPAREN;
	v->a[50636] = anon_sym_BQUOTE;
	v->a[50637] = sym_word;
	v->a[50638] = actions(1560);
	v->a[50639] = 9;
	small_parse_table_2532(v);
}

void	small_parse_table_2532(t_small_parse_table_array *v)
{
	v->a[50640] = anon_sym_PIPE;
	v->a[50641] = anon_sym_SEMI_SEMI;
	v->a[50642] = anon_sym_AMP_AMP;
	v->a[50643] = anon_sym_PIPE_PIPE;
	v->a[50644] = anon_sym_LT_LT;
	v->a[50645] = anon_sym_LT_LT_DASH;
	v->a[50646] = aux_sym_heredoc_redirect_token1;
	v->a[50647] = anon_sym_AMP;
	v->a[50648] = anon_sym_SEMI;
	v->a[50649] = actions(1562);
	v->a[50650] = 10;
	v->a[50651] = anon_sym_LT;
	v->a[50652] = anon_sym_GT;
	v->a[50653] = anon_sym_GT_GT;
	v->a[50654] = anon_sym_AMP_GT;
	v->a[50655] = anon_sym_AMP_GT_GT;
	v->a[50656] = anon_sym_LT_AMP;
	v->a[50657] = anon_sym_GT_AMP;
	v->a[50658] = anon_sym_GT_PIPE;
	v->a[50659] = anon_sym_LT_AMP_DASH;
	small_parse_table_2533(v);
}

void	small_parse_table_2533(t_small_parse_table_array *v)
{
	v->a[50660] = anon_sym_GT_AMP_DASH;
	v->a[50661] = 4;
	v->a[50662] = actions(3);
	v->a[50663] = 1;
	v->a[50664] = sym_comment;
	v->a[50665] = actions(1554);
	v->a[50666] = 2;
	v->a[50667] = anon_sym_RPAREN;
	v->a[50668] = anon_sym_SEMI_SEMI;
	v->a[50669] = actions(1556);
	v->a[50670] = 2;
	v->a[50671] = sym_file_descriptor;
	v->a[50672] = sym_variable_name;
	v->a[50673] = actions(1552);
	v->a[50674] = 27;
	v->a[50675] = anon_sym_for;
	v->a[50676] = anon_sym_while;
	v->a[50677] = anon_sym_until;
	v->a[50678] = anon_sym_if;
	v->a[50679] = anon_sym_case;
	small_parse_table_2534(v);
}

void	small_parse_table_2534(t_small_parse_table_array *v)
{
	v->a[50680] = anon_sym_LPAREN;
	v->a[50681] = anon_sym_LBRACE;
	v->a[50682] = anon_sym_BANG;
	v->a[50683] = anon_sym_LT;
	v->a[50684] = anon_sym_GT;
	v->a[50685] = anon_sym_GT_GT;
	v->a[50686] = anon_sym_AMP_GT;
	v->a[50687] = anon_sym_AMP_GT_GT;
	v->a[50688] = anon_sym_LT_AMP;
	v->a[50689] = anon_sym_GT_AMP;
	v->a[50690] = anon_sym_GT_PIPE;
	v->a[50691] = anon_sym_LT_AMP_DASH;
	v->a[50692] = anon_sym_GT_AMP_DASH;
	v->a[50693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50694] = anon_sym_DOLLAR;
	v->a[50695] = anon_sym_DQUOTE;
	v->a[50696] = sym_raw_string;
	v->a[50697] = sym_number;
	v->a[50698] = anon_sym_DOLLAR_LBRACE;
	v->a[50699] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2535(v);
}

/* EOF small_parse_table_506.c */
