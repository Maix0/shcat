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
	v->a[50600] = anon_sym_LT_LT;
	v->a[50601] = anon_sym_SEMI;
	v->a[50602] = 5;
	v->a[50603] = actions(3);
	v->a[50604] = 1;
	v->a[50605] = sym_comment;
	v->a[50606] = actions(2514);
	v->a[50607] = 1;
	v->a[50608] = anon_sym_PIPE;
	v->a[50609] = state(1137);
	v->a[50610] = 1;
	v->a[50611] = aux_sym_pipeline_repeat1;
	v->a[50612] = actions(2357);
	v->a[50613] = 2;
	v->a[50614] = ts_builtin_sym_end;
	v->a[50615] = aux_sym_heredoc_redirect_token1;
	v->a[50616] = actions(2353);
	v->a[50617] = 8;
	v->a[50618] = anon_sym_SEMI_SEMI;
	v->a[50619] = anon_sym_AMP_AMP;
	small_parse_table_2531(v);
}

void	small_parse_table_2531(t_small_parse_table_array *v)
{
	v->a[50620] = anon_sym_PIPE_PIPE;
	v->a[50621] = anon_sym_LT;
	v->a[50622] = anon_sym_GT;
	v->a[50623] = anon_sym_GT_GT;
	v->a[50624] = anon_sym_LT_LT;
	v->a[50625] = anon_sym_SEMI;
	v->a[50626] = 10;
	v->a[50627] = actions(3);
	v->a[50628] = 1;
	v->a[50629] = sym_comment;
	v->a[50630] = actions(2293);
	v->a[50631] = 1;
	v->a[50632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50633] = actions(2299);
	v->a[50634] = 1;
	v->a[50635] = sym_string_content;
	v->a[50636] = actions(2301);
	v->a[50637] = 1;
	v->a[50638] = anon_sym_DOLLAR_LBRACE;
	v->a[50639] = actions(2303);
	small_parse_table_2532(v);
}

void	small_parse_table_2532(t_small_parse_table_array *v)
{
	v->a[50640] = 1;
	v->a[50641] = anon_sym_DOLLAR_LPAREN;
	v->a[50642] = actions(2305);
	v->a[50643] = 1;
	v->a[50644] = anon_sym_BQUOTE;
	v->a[50645] = actions(2516);
	v->a[50646] = 1;
	v->a[50647] = anon_sym_DOLLAR;
	v->a[50648] = actions(2518);
	v->a[50649] = 1;
	v->a[50650] = anon_sym_DQUOTE;
	v->a[50651] = state(1176);
	v->a[50652] = 1;
	v->a[50653] = aux_sym_string_repeat1;
	v->a[50654] = state(1394);
	v->a[50655] = 4;
	v->a[50656] = sym_arithmetic_expansion;
	v->a[50657] = sym_simple_expansion;
	v->a[50658] = sym_expansion;
	v->a[50659] = sym_command_substitution;
	small_parse_table_2533(v);
}

void	small_parse_table_2533(t_small_parse_table_array *v)
{
	v->a[50660] = 4;
	v->a[50661] = actions(3);
	v->a[50662] = 1;
	v->a[50663] = sym_comment;
	v->a[50664] = actions(2522);
	v->a[50665] = 1;
	v->a[50666] = anon_sym_esac;
	v->a[50667] = actions(2524);
	v->a[50668] = 1;
	v->a[50669] = sym_extglob_pattern;
	v->a[50670] = actions(2520);
	v->a[50671] = 10;
	v->a[50672] = anon_sym_LPAREN;
	v->a[50673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50674] = anon_sym_DOLLAR;
	v->a[50675] = anon_sym_DQUOTE;
	v->a[50676] = sym_raw_string;
	v->a[50677] = sym_number;
	v->a[50678] = anon_sym_DOLLAR_LBRACE;
	v->a[50679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2534(v);
}

void	small_parse_table_2534(t_small_parse_table_array *v)
{
	v->a[50680] = anon_sym_BQUOTE;
	v->a[50681] = sym_word;
	v->a[50682] = 8;
	v->a[50683] = actions(3);
	v->a[50684] = 1;
	v->a[50685] = sym_comment;
	v->a[50686] = actions(2277);
	v->a[50687] = 1;
	v->a[50688] = anon_sym_POUND;
	v->a[50689] = actions(2279);
	v->a[50690] = 1;
	v->a[50691] = aux_sym__simple_variable_name_token1;
	v->a[50692] = actions(2281);
	v->a[50693] = 1;
	v->a[50694] = anon_sym_0;
	v->a[50695] = actions(2283);
	v->a[50696] = 1;
	v->a[50697] = sym_variable_name;
	v->a[50698] = actions(2526);
	v->a[50699] = 1;
	small_parse_table_2535(v);
}

/* EOF small_parse_table_506.c */
