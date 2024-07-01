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
	v->a[23600] = anon_sym_GT_AMP;
	v->a[23601] = anon_sym_GT_PIPE;
	v->a[23602] = anon_sym_LT_GT;
	v->a[23603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23604] = anon_sym_DOLLAR;
	v->a[23605] = anon_sym_DQUOTE;
	v->a[23606] = sym_raw_string;
	v->a[23607] = sym_number;
	v->a[23608] = anon_sym_DOLLAR_LBRACE;
	v->a[23609] = anon_sym_DOLLAR_LPAREN;
	v->a[23610] = anon_sym_BQUOTE;
	v->a[23611] = sym_word;
	v->a[23612] = 3;
	v->a[23613] = actions(664);
	v->a[23614] = 1;
	v->a[23615] = sym_comment;
	v->a[23616] = actions(897);
	v->a[23617] = 13;
	v->a[23618] = anon_sym_PIPE;
	v->a[23619] = anon_sym_EQ;
	small_parse_table_1181(v);
}

void	small_parse_table_1181(t_small_parse_table_array *v)
{
	v->a[23620] = anon_sym_LT;
	v->a[23621] = anon_sym_GT;
	v->a[23622] = anon_sym_GT_GT;
	v->a[23623] = anon_sym_LT_LT;
	v->a[23624] = anon_sym_CARET;
	v->a[23625] = anon_sym_AMP;
	v->a[23626] = anon_sym_PLUS;
	v->a[23627] = anon_sym_DASH;
	v->a[23628] = anon_sym_STAR;
	v->a[23629] = anon_sym_SLASH;
	v->a[23630] = anon_sym_PERCENT;
	v->a[23631] = actions(899);
	v->a[23632] = 21;
	v->a[23633] = anon_sym_AMP_AMP;
	v->a[23634] = anon_sym_PIPE_PIPE;
	v->a[23635] = anon_sym_RPAREN_RPAREN;
	v->a[23636] = anon_sym_PLUS_EQ;
	v->a[23637] = anon_sym_DASH_EQ;
	v->a[23638] = anon_sym_STAR_EQ;
	v->a[23639] = anon_sym_SLASH_EQ;
	small_parse_table_1182(v);
}

void	small_parse_table_1182(t_small_parse_table_array *v)
{
	v->a[23640] = anon_sym_PERCENT_EQ;
	v->a[23641] = anon_sym_LT_LT_EQ;
	v->a[23642] = anon_sym_GT_GT_EQ;
	v->a[23643] = anon_sym_AMP_EQ;
	v->a[23644] = anon_sym_CARET_EQ;
	v->a[23645] = anon_sym_PIPE_EQ;
	v->a[23646] = anon_sym_EQ_EQ;
	v->a[23647] = anon_sym_BANG_EQ;
	v->a[23648] = anon_sym_LT_EQ;
	v->a[23649] = anon_sym_GT_EQ;
	v->a[23650] = anon_sym_QMARK;
	v->a[23651] = anon_sym_COLON;
	v->a[23652] = anon_sym_PLUS_PLUS2;
	v->a[23653] = anon_sym_DASH_DASH2;
	v->a[23654] = 13;
	v->a[23655] = actions(3);
	v->a[23656] = 1;
	v->a[23657] = sym_comment;
	v->a[23658] = actions(459);
	v->a[23659] = 1;
	small_parse_table_1183(v);
}

void	small_parse_table_1183(t_small_parse_table_array *v)
{
	v->a[23660] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23661] = actions(461);
	v->a[23662] = 1;
	v->a[23663] = anon_sym_DOLLAR;
	v->a[23664] = actions(463);
	v->a[23665] = 1;
	v->a[23666] = anon_sym_DQUOTE;
	v->a[23667] = actions(465);
	v->a[23668] = 1;
	v->a[23669] = anon_sym_DOLLAR_LBRACE;
	v->a[23670] = actions(467);
	v->a[23671] = 1;
	v->a[23672] = anon_sym_DOLLAR_LPAREN;
	v->a[23673] = actions(471);
	v->a[23674] = 1;
	v->a[23675] = sym__bare_dollar;
	v->a[23676] = actions(558);
	v->a[23677] = 1;
	v->a[23678] = sym_file_descriptor;
	v->a[23679] = state(235);
	small_parse_table_1184(v);
}

void	small_parse_table_1184(t_small_parse_table_array *v)
{
	v->a[23680] = 1;
	v->a[23681] = aux_sym_command_repeat2;
	v->a[23682] = state(627);
	v->a[23683] = 1;
	v->a[23684] = sym_concatenation;
	v->a[23685] = actions(493);
	v->a[23686] = 3;
	v->a[23687] = sym_raw_string;
	v->a[23688] = sym_number;
	v->a[23689] = sym_word;
	v->a[23690] = state(469);
	v->a[23691] = 5;
	v->a[23692] = sym_arithmetic_expansion;
	v->a[23693] = sym_string;
	v->a[23694] = sym_simple_expansion;
	v->a[23695] = sym_expansion;
	v->a[23696] = sym_command_substitution;
	v->a[23697] = actions(556);
	v->a[23698] = 17;
	v->a[23699] = anon_sym_PIPE;
	small_parse_table_1185(v);
}

/* EOF small_parse_table_236.c */
