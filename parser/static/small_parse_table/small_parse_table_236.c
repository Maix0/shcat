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
	v->a[23600] = anon_sym_SEMI;
	v->a[23601] = 5;
	v->a[23602] = actions(3);
	v->a[23603] = 1;
	v->a[23604] = sym_comment;
	v->a[23605] = state(723);
	v->a[23606] = 1;
	v->a[23607] = sym_concatenation;
	v->a[23608] = actions(790);
	v->a[23609] = 2;
	v->a[23610] = sym_file_descriptor;
	v->a[23611] = sym_variable_name;
	v->a[23612] = state(404);
	v->a[23613] = 5;
	v->a[23614] = sym_arithmetic_expansion;
	v->a[23615] = sym_string;
	v->a[23616] = sym_simple_expansion;
	v->a[23617] = sym_expansion;
	v->a[23618] = sym_command_substitution;
	v->a[23619] = actions(788);
	small_parse_table_1181(v);
}

void	small_parse_table_1181(t_small_parse_table_array *v)
{
	v->a[23620] = 27;
	v->a[23621] = anon_sym_esac;
	v->a[23622] = anon_sym_PIPE;
	v->a[23623] = anon_sym_SEMI_SEMI;
	v->a[23624] = anon_sym_AMP_AMP;
	v->a[23625] = anon_sym_PIPE_PIPE;
	v->a[23626] = anon_sym_LT;
	v->a[23627] = anon_sym_GT;
	v->a[23628] = anon_sym_GT_GT;
	v->a[23629] = anon_sym_LT_AMP;
	v->a[23630] = anon_sym_GT_AMP;
	v->a[23631] = anon_sym_GT_PIPE;
	v->a[23632] = anon_sym_LT_AMP_DASH;
	v->a[23633] = anon_sym_GT_AMP_DASH;
	v->a[23634] = anon_sym_LT_LT;
	v->a[23635] = anon_sym_LT_LT_DASH;
	v->a[23636] = aux_sym_heredoc_redirect_token1;
	v->a[23637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23638] = anon_sym_AMP;
	v->a[23639] = anon_sym_DOLLAR;
	small_parse_table_1182(v);
}

void	small_parse_table_1182(t_small_parse_table_array *v)
{
	v->a[23640] = anon_sym_DQUOTE;
	v->a[23641] = sym_raw_string;
	v->a[23642] = sym_number;
	v->a[23643] = anon_sym_DOLLAR_LBRACE;
	v->a[23644] = anon_sym_DOLLAR_LPAREN;
	v->a[23645] = anon_sym_BQUOTE;
	v->a[23646] = sym_word;
	v->a[23647] = anon_sym_SEMI;
	v->a[23648] = 6;
	v->a[23649] = actions(3);
	v->a[23650] = 1;
	v->a[23651] = sym_comment;
	v->a[23652] = actions(379);
	v->a[23653] = 1;
	v->a[23654] = sym_file_descriptor;
	v->a[23655] = actions(435);
	v->a[23656] = 1;
	v->a[23657] = sym_variable_name;
	v->a[23658] = actions(433);
	v->a[23659] = 2;
	small_parse_table_1183(v);
}

void	small_parse_table_1183(t_small_parse_table_array *v)
{
	v->a[23660] = aux_sym__simple_variable_name_token1;
	v->a[23661] = aux_sym__multiline_variable_name_token1;
	v->a[23662] = actions(431);
	v->a[23663] = 9;
	v->a[23664] = anon_sym_BANG;
	v->a[23665] = anon_sym_DASH;
	v->a[23666] = anon_sym_STAR;
	v->a[23667] = anon_sym_QMARK;
	v->a[23668] = anon_sym_DOLLAR;
	v->a[23669] = anon_sym_POUND;
	v->a[23670] = anon_sym_AT;
	v->a[23671] = anon_sym_0;
	v->a[23672] = anon_sym__;
	v->a[23673] = actions(381);
	v->a[23674] = 22;
	v->a[23675] = anon_sym_PIPE;
	v->a[23676] = anon_sym_AMP_AMP;
	v->a[23677] = anon_sym_PIPE_PIPE;
	v->a[23678] = anon_sym_LT;
	v->a[23679] = anon_sym_GT;
	small_parse_table_1184(v);
}

void	small_parse_table_1184(t_small_parse_table_array *v)
{
	v->a[23680] = anon_sym_GT_GT;
	v->a[23681] = anon_sym_LT_AMP;
	v->a[23682] = anon_sym_GT_AMP;
	v->a[23683] = anon_sym_GT_PIPE;
	v->a[23684] = anon_sym_LT_AMP_DASH;
	v->a[23685] = anon_sym_GT_AMP_DASH;
	v->a[23686] = anon_sym_LT_LT;
	v->a[23687] = anon_sym_LT_LT_DASH;
	v->a[23688] = aux_sym_heredoc_redirect_token1;
	v->a[23689] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23690] = anon_sym_DQUOTE;
	v->a[23691] = sym_raw_string;
	v->a[23692] = sym_number;
	v->a[23693] = anon_sym_DOLLAR_LBRACE;
	v->a[23694] = anon_sym_DOLLAR_LPAREN;
	v->a[23695] = anon_sym_BQUOTE;
	v->a[23696] = sym_word;
	v->a[23697] = 5;
	v->a[23698] = actions(3);
	v->a[23699] = 1;
	small_parse_table_1185(v);
}

/* EOF small_parse_table_236.c */
