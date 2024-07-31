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
	v->a[23600] = anon_sym_LT;
	v->a[23601] = anon_sym_GT;
	v->a[23602] = anon_sym_GT_GT;
	v->a[23603] = anon_sym_LT_AMP;
	v->a[23604] = anon_sym_GT_AMP;
	v->a[23605] = anon_sym_GT_PIPE;
	v->a[23606] = anon_sym_LT_GT;
	v->a[23607] = anon_sym_LT_LT;
	v->a[23608] = anon_sym_LT_LT_DASH;
	v->a[23609] = aux_sym_heredoc_redirect_token1;
	v->a[23610] = anon_sym_SEMI;
	v->a[23611] = 11;
	v->a[23612] = actions(3);
	v->a[23613] = 1;
	v->a[23614] = sym_comment;
	v->a[23615] = actions(872);
	v->a[23616] = 1;
	v->a[23617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23618] = actions(874);
	v->a[23619] = 1;
	small_parse_table_1181(v);
}

void	small_parse_table_1181(t_small_parse_table_array *v)
{
	v->a[23620] = anon_sym_DOLLAR;
	v->a[23621] = actions(876);
	v->a[23622] = 1;
	v->a[23623] = anon_sym_DQUOTE;
	v->a[23624] = actions(878);
	v->a[23625] = 1;
	v->a[23626] = anon_sym_DOLLAR_LBRACE;
	v->a[23627] = actions(880);
	v->a[23628] = 1;
	v->a[23629] = anon_sym_DOLLAR_LPAREN;
	v->a[23630] = actions(882);
	v->a[23631] = 1;
	v->a[23632] = anon_sym_BQUOTE;
	v->a[23633] = state(256);
	v->a[23634] = 2;
	v->a[23635] = sym_concatenation;
	v->a[23636] = aux_sym_for_statement_repeat1;
	v->a[23637] = actions(870);
	v->a[23638] = 3;
	v->a[23639] = sym_raw_string;
	small_parse_table_1182(v);
}

void	small_parse_table_1182(t_small_parse_table_array *v)
{
	v->a[23640] = sym_number;
	v->a[23641] = sym_word;
	v->a[23642] = state(412);
	v->a[23643] = 5;
	v->a[23644] = sym_arithmetic_expansion;
	v->a[23645] = sym_string;
	v->a[23646] = sym_simple_expansion;
	v->a[23647] = sym_expansion;
	v->a[23648] = sym_command_substitution;
	v->a[23649] = actions(487);
	v->a[23650] = 16;
	v->a[23651] = anon_sym_esac;
	v->a[23652] = anon_sym_PIPE;
	v->a[23653] = anon_sym_SEMI_SEMI;
	v->a[23654] = anon_sym_AMP_AMP;
	v->a[23655] = anon_sym_PIPE_PIPE;
	v->a[23656] = anon_sym_LT;
	v->a[23657] = anon_sym_GT;
	v->a[23658] = anon_sym_GT_GT;
	v->a[23659] = anon_sym_LT_AMP;
	small_parse_table_1183(v);
}

void	small_parse_table_1183(t_small_parse_table_array *v)
{
	v->a[23660] = anon_sym_GT_AMP;
	v->a[23661] = anon_sym_GT_PIPE;
	v->a[23662] = anon_sym_LT_GT;
	v->a[23663] = anon_sym_LT_LT;
	v->a[23664] = anon_sym_LT_LT_DASH;
	v->a[23665] = aux_sym_heredoc_redirect_token1;
	v->a[23666] = anon_sym_SEMI;
	v->a[23667] = 11;
	v->a[23668] = actions(3);
	v->a[23669] = 1;
	v->a[23670] = sym_comment;
	v->a[23671] = actions(886);
	v->a[23672] = 1;
	v->a[23673] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23674] = actions(888);
	v->a[23675] = 1;
	v->a[23676] = anon_sym_DOLLAR;
	v->a[23677] = actions(890);
	v->a[23678] = 1;
	v->a[23679] = anon_sym_DQUOTE;
	small_parse_table_1184(v);
}

void	small_parse_table_1184(t_small_parse_table_array *v)
{
	v->a[23680] = actions(892);
	v->a[23681] = 1;
	v->a[23682] = anon_sym_DOLLAR_LBRACE;
	v->a[23683] = actions(894);
	v->a[23684] = 1;
	v->a[23685] = anon_sym_DOLLAR_LPAREN;
	v->a[23686] = actions(896);
	v->a[23687] = 1;
	v->a[23688] = anon_sym_BQUOTE;
	v->a[23689] = state(263);
	v->a[23690] = 2;
	v->a[23691] = sym_concatenation;
	v->a[23692] = aux_sym_for_statement_repeat1;
	v->a[23693] = actions(884);
	v->a[23694] = 3;
	v->a[23695] = sym_raw_string;
	v->a[23696] = sym_number;
	v->a[23697] = sym_word;
	v->a[23698] = state(405);
	v->a[23699] = 5;
	small_parse_table_1185(v);
}

/* EOF small_parse_table_236.c */
