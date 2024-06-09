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
	v->a[23600] = 2;
	v->a[23601] = sym_concatenation;
	v->a[23602] = aux_sym_for_statement_repeat1;
	v->a[23603] = state(378);
	v->a[23604] = 6;
	v->a[23605] = sym_arithmetic_expansion;
	v->a[23606] = sym_string;
	v->a[23607] = sym_number;
	v->a[23608] = sym_simple_expansion;
	v->a[23609] = sym_expansion;
	v->a[23610] = sym_command_substitution;
	v->a[23611] = actions(636);
	v->a[23612] = 20;
	v->a[23613] = anon_sym_esac;
	v->a[23614] = anon_sym_PIPE;
	v->a[23615] = anon_sym_SEMI_SEMI;
	v->a[23616] = anon_sym_AMP_AMP;
	v->a[23617] = anon_sym_PIPE_PIPE;
	v->a[23618] = anon_sym_LT;
	v->a[23619] = anon_sym_GT;
	small_parse_table_1181(v);
}

void	small_parse_table_1181(t_small_parse_table_array *v)
{
	v->a[23620] = anon_sym_GT_GT;
	v->a[23621] = anon_sym_AMP_GT;
	v->a[23622] = anon_sym_AMP_GT_GT;
	v->a[23623] = anon_sym_LT_AMP;
	v->a[23624] = anon_sym_GT_AMP;
	v->a[23625] = anon_sym_GT_PIPE;
	v->a[23626] = anon_sym_LT_AMP_DASH;
	v->a[23627] = anon_sym_GT_AMP_DASH;
	v->a[23628] = anon_sym_LT_LT;
	v->a[23629] = anon_sym_LT_LT_DASH;
	v->a[23630] = aux_sym_heredoc_redirect_token1;
	v->a[23631] = anon_sym_AMP;
	v->a[23632] = anon_sym_SEMI;
	v->a[23633] = 16;
	v->a[23634] = actions(3);
	v->a[23635] = 1;
	v->a[23636] = sym_comment;
	v->a[23637] = actions(527);
	v->a[23638] = 1;
	v->a[23639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1182(v);
}

void	small_parse_table_1182(t_small_parse_table_array *v)
{
	v->a[23640] = actions(529);
	v->a[23641] = 1;
	v->a[23642] = anon_sym_DOLLAR;
	v->a[23643] = actions(531);
	v->a[23644] = 1;
	v->a[23645] = anon_sym_DQUOTE;
	v->a[23646] = actions(533);
	v->a[23647] = 1;
	v->a[23648] = aux_sym_number_token1;
	v->a[23649] = actions(535);
	v->a[23650] = 1;
	v->a[23651] = aux_sym_number_token2;
	v->a[23652] = actions(537);
	v->a[23653] = 1;
	v->a[23654] = anon_sym_DOLLAR_LBRACE;
	v->a[23655] = actions(539);
	v->a[23656] = 1;
	v->a[23657] = anon_sym_DOLLAR_LPAREN;
	v->a[23658] = actions(541);
	v->a[23659] = 1;
	small_parse_table_1183(v);
}

void	small_parse_table_1183(t_small_parse_table_array *v)
{
	v->a[23660] = anon_sym_BQUOTE;
	v->a[23661] = actions(543);
	v->a[23662] = 1;
	v->a[23663] = sym__bare_dollar;
	v->a[23664] = state(202);
	v->a[23665] = 1;
	v->a[23666] = aux_sym_command_repeat2;
	v->a[23667] = state(739);
	v->a[23668] = 1;
	v->a[23669] = sym_concatenation;
	v->a[23670] = actions(525);
	v->a[23671] = 2;
	v->a[23672] = sym_raw_string;
	v->a[23673] = sym_word;
	v->a[23674] = actions(559);
	v->a[23675] = 2;
	v->a[23676] = sym_file_descriptor;
	v->a[23677] = ts_builtin_sym_end;
	v->a[23678] = state(343);
	v->a[23679] = 6;
	small_parse_table_1184(v);
}

void	small_parse_table_1184(t_small_parse_table_array *v)
{
	v->a[23680] = sym_arithmetic_expansion;
	v->a[23681] = sym_string;
	v->a[23682] = sym_number;
	v->a[23683] = sym_simple_expansion;
	v->a[23684] = sym_expansion;
	v->a[23685] = sym_command_substitution;
	v->a[23686] = actions(557);
	v->a[23687] = 19;
	v->a[23688] = anon_sym_PIPE;
	v->a[23689] = anon_sym_SEMI_SEMI;
	v->a[23690] = anon_sym_AMP_AMP;
	v->a[23691] = anon_sym_PIPE_PIPE;
	v->a[23692] = anon_sym_LT;
	v->a[23693] = anon_sym_GT;
	v->a[23694] = anon_sym_GT_GT;
	v->a[23695] = anon_sym_AMP_GT;
	v->a[23696] = anon_sym_AMP_GT_GT;
	v->a[23697] = anon_sym_LT_AMP;
	v->a[23698] = anon_sym_GT_AMP;
	v->a[23699] = anon_sym_GT_PIPE;
	small_parse_table_1185(v);
}

/* EOF small_parse_table_236.c */
