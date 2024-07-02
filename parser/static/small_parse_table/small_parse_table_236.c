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
	v->a[23600] = anon_sym_LT_EQ;
	v->a[23601] = anon_sym_GT_EQ;
	v->a[23602] = anon_sym_QMARK;
	v->a[23603] = anon_sym_COLON;
	v->a[23604] = 13;
	v->a[23605] = actions(3);
	v->a[23606] = 1;
	v->a[23607] = sym_comment;
	v->a[23608] = actions(463);
	v->a[23609] = 1;
	v->a[23610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23611] = actions(465);
	v->a[23612] = 1;
	v->a[23613] = anon_sym_DOLLAR;
	v->a[23614] = actions(467);
	v->a[23615] = 1;
	v->a[23616] = anon_sym_DQUOTE;
	v->a[23617] = actions(469);
	v->a[23618] = 1;
	v->a[23619] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1181(v);
}

void	small_parse_table_1181(t_small_parse_table_array *v)
{
	v->a[23620] = actions(471);
	v->a[23621] = 1;
	v->a[23622] = anon_sym_DOLLAR_LPAREN;
	v->a[23623] = actions(475);
	v->a[23624] = 1;
	v->a[23625] = sym__bare_dollar;
	v->a[23626] = actions(507);
	v->a[23627] = 1;
	v->a[23628] = sym_file_descriptor;
	v->a[23629] = state(246);
	v->a[23630] = 1;
	v->a[23631] = aux_sym_command_repeat2;
	v->a[23632] = state(662);
	v->a[23633] = 1;
	v->a[23634] = sym_concatenation;
	v->a[23635] = actions(493);
	v->a[23636] = 3;
	v->a[23637] = sym_raw_string;
	v->a[23638] = sym_number;
	v->a[23639] = sym_word;
	small_parse_table_1182(v);
}

void	small_parse_table_1182(t_small_parse_table_array *v)
{
	v->a[23640] = state(490);
	v->a[23641] = 5;
	v->a[23642] = sym_arithmetic_expansion;
	v->a[23643] = sym_string;
	v->a[23644] = sym_simple_expansion;
	v->a[23645] = sym_expansion;
	v->a[23646] = sym_command_substitution;
	v->a[23647] = actions(505);
	v->a[23648] = 17;
	v->a[23649] = anon_sym_PIPE;
	v->a[23650] = anon_sym_SEMI_SEMI;
	v->a[23651] = anon_sym_AMP_AMP;
	v->a[23652] = anon_sym_PIPE_PIPE;
	v->a[23653] = anon_sym_LT;
	v->a[23654] = anon_sym_GT;
	v->a[23655] = anon_sym_GT_GT;
	v->a[23656] = anon_sym_LT_AMP;
	v->a[23657] = anon_sym_GT_AMP;
	v->a[23658] = anon_sym_GT_PIPE;
	v->a[23659] = anon_sym_LT_GT;
	small_parse_table_1183(v);
}

void	small_parse_table_1183(t_small_parse_table_array *v)
{
	v->a[23660] = anon_sym_LT_LT;
	v->a[23661] = anon_sym_LT_LT_DASH;
	v->a[23662] = aux_sym_heredoc_redirect_token1;
	v->a[23663] = anon_sym_AMP;
	v->a[23664] = anon_sym_BQUOTE;
	v->a[23665] = anon_sym_SEMI;
	v->a[23666] = 12;
	v->a[23667] = actions(3);
	v->a[23668] = 1;
	v->a[23669] = sym_comment;
	v->a[23670] = actions(692);
	v->a[23671] = 1;
	v->a[23672] = anon_sym_PIPE;
	v->a[23673] = actions(702);
	v->a[23674] = 1;
	v->a[23675] = sym_file_descriptor;
	v->a[23676] = actions(765);
	v->a[23677] = 1;
	v->a[23678] = sym_variable_name;
	v->a[23679] = state(642);
	small_parse_table_1184(v);
}

void	small_parse_table_1184(t_small_parse_table_array *v)
{
	v->a[23680] = 1;
	v->a[23681] = sym_terminator;
	v->a[23682] = actions(724);
	v->a[23683] = 2;
	v->a[23684] = anon_sym_esac;
	v->a[23685] = anon_sym_SEMI_SEMI;
	v->a[23686] = actions(759);
	v->a[23687] = 2;
	v->a[23688] = anon_sym_AMP_AMP;
	v->a[23689] = anon_sym_PIPE_PIPE;
	v->a[23690] = actions(761);
	v->a[23691] = 2;
	v->a[23692] = anon_sym_LT_LT;
	v->a[23693] = anon_sym_LT_LT_DASH;
	v->a[23694] = state(1048);
	v->a[23695] = 2;
	v->a[23696] = sym_variable_assignment;
	v->a[23697] = aux_sym__variable_assignments_repeat1;
	v->a[23698] = actions(763);
	v->a[23699] = 3;
	small_parse_table_1185(v);
}

/* EOF small_parse_table_236.c */
