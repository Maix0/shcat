/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_236.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1180(t_small_parse_table_array *v)
{
	v->a[23600] = sym_word;
	v->a[23601] = state(561);
	v->a[23602] = 5;
	v->a[23603] = sym_arithmetic_expansion;
	v->a[23604] = sym_string;
	v->a[23605] = sym_simple_expansion;
	v->a[23606] = sym_expansion;
	v->a[23607] = sym_command_substitution;
	v->a[23608] = actions(610);
	v->a[23609] = 19;
	v->a[23610] = anon_sym_PIPE;
	v->a[23611] = anon_sym_SEMI_SEMI;
	v->a[23612] = anon_sym_AMP_AMP;
	v->a[23613] = anon_sym_PIPE_PIPE;
	v->a[23614] = anon_sym_LT;
	v->a[23615] = anon_sym_GT;
	v->a[23616] = anon_sym_GT_GT;
	v->a[23617] = anon_sym_AMP_GT;
	v->a[23618] = anon_sym_AMP_GT_GT;
	v->a[23619] = anon_sym_LT_AMP;
	small_parse_table_1181(v);
}

void	small_parse_table_1181(t_small_parse_table_array *v)
{
	v->a[23620] = anon_sym_GT_AMP;
	v->a[23621] = anon_sym_GT_PIPE;
	v->a[23622] = anon_sym_LT_AMP_DASH;
	v->a[23623] = anon_sym_GT_AMP_DASH;
	v->a[23624] = anon_sym_LT_LT;
	v->a[23625] = anon_sym_LT_LT_DASH;
	v->a[23626] = aux_sym_heredoc_redirect_token1;
	v->a[23627] = anon_sym_AMP;
	v->a[23628] = anon_sym_SEMI;
	v->a[23629] = 6;
	v->a[23630] = actions(3);
	v->a[23631] = 1;
	v->a[23632] = sym_comment;
	v->a[23633] = actions(745);
	v->a[23634] = 1;
	v->a[23635] = sym_variable_name;
	v->a[23636] = actions(379);
	v->a[23637] = 2;
	v->a[23638] = sym_file_descriptor;
	v->a[23639] = sym__bare_dollar;
	small_parse_table_1182(v);
}

void	small_parse_table_1182(t_small_parse_table_array *v)
{
	v->a[23640] = actions(743);
	v->a[23641] = 2;
	v->a[23642] = aux_sym__simple_variable_name_token1;
	v->a[23643] = aux_sym__multiline_variable_name_token1;
	v->a[23644] = actions(741);
	v->a[23645] = 9;
	v->a[23646] = anon_sym_BANG;
	v->a[23647] = anon_sym_DASH;
	v->a[23648] = anon_sym_STAR;
	v->a[23649] = anon_sym_QMARK;
	v->a[23650] = anon_sym_DOLLAR;
	v->a[23651] = anon_sym_POUND;
	v->a[23652] = anon_sym_AT;
	v->a[23653] = anon_sym_0;
	v->a[23654] = anon_sym__;
	v->a[23655] = actions(381);
	v->a[23656] = 23;
	v->a[23657] = anon_sym_PIPE;
	v->a[23658] = anon_sym_AMP_AMP;
	v->a[23659] = anon_sym_PIPE_PIPE;
	small_parse_table_1183(v);
}

void	small_parse_table_1183(t_small_parse_table_array *v)
{
	v->a[23660] = anon_sym_LT;
	v->a[23661] = anon_sym_GT;
	v->a[23662] = anon_sym_GT_GT;
	v->a[23663] = anon_sym_AMP_GT;
	v->a[23664] = anon_sym_AMP_GT_GT;
	v->a[23665] = anon_sym_LT_AMP;
	v->a[23666] = anon_sym_GT_AMP;
	v->a[23667] = anon_sym_GT_PIPE;
	v->a[23668] = anon_sym_LT_AMP_DASH;
	v->a[23669] = anon_sym_GT_AMP_DASH;
	v->a[23670] = anon_sym_LT_LT;
	v->a[23671] = anon_sym_LT_LT_DASH;
	v->a[23672] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23673] = anon_sym_DQUOTE;
	v->a[23674] = sym_raw_string;
	v->a[23675] = sym_number;
	v->a[23676] = anon_sym_DOLLAR_LBRACE;
	v->a[23677] = anon_sym_DOLLAR_LPAREN;
	v->a[23678] = anon_sym_BQUOTE;
	v->a[23679] = sym_word;
	small_parse_table_1184(v);
}

void	small_parse_table_1184(t_small_parse_table_array *v)
{
	v->a[23680] = 13;
	v->a[23681] = actions(3);
	v->a[23682] = 1;
	v->a[23683] = sym_comment;
	v->a[23684] = actions(497);
	v->a[23685] = 1;
	v->a[23686] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23687] = actions(499);
	v->a[23688] = 1;
	v->a[23689] = anon_sym_DOLLAR;
	v->a[23690] = actions(501);
	v->a[23691] = 1;
	v->a[23692] = anon_sym_DQUOTE;
	v->a[23693] = actions(503);
	v->a[23694] = 1;
	v->a[23695] = anon_sym_DOLLAR_LBRACE;
	v->a[23696] = actions(505);
	v->a[23697] = 1;
	v->a[23698] = anon_sym_DOLLAR_LPAREN;
	v->a[23699] = actions(509);
	small_parse_table_1185(v);
}

/* EOF small_parse_table_236.c */
