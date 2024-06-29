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
	v->a[23600] = anon_sym_AMP;
	v->a[23601] = anon_sym_SEMI;
	v->a[23602] = 12;
	v->a[23603] = actions(3);
	v->a[23604] = 1;
	v->a[23605] = sym_comment;
	v->a[23606] = actions(766);
	v->a[23607] = 1;
	v->a[23608] = anon_sym_PIPE;
	v->a[23609] = actions(774);
	v->a[23610] = 1;
	v->a[23611] = sym_file_descriptor;
	v->a[23612] = actions(776);
	v->a[23613] = 1;
	v->a[23614] = sym_variable_name;
	v->a[23615] = state(752);
	v->a[23616] = 1;
	v->a[23617] = sym_terminator;
	v->a[23618] = actions(764);
	v->a[23619] = 2;
	small_parse_table_1181(v);
}

void	small_parse_table_1181(t_small_parse_table_array *v)
{
	v->a[23620] = anon_sym_esac;
	v->a[23621] = anon_sym_SEMI_SEMI;
	v->a[23622] = actions(768);
	v->a[23623] = 2;
	v->a[23624] = anon_sym_AMP_AMP;
	v->a[23625] = anon_sym_PIPE_PIPE;
	v->a[23626] = actions(770);
	v->a[23627] = 2;
	v->a[23628] = anon_sym_LT_LT;
	v->a[23629] = anon_sym_LT_LT_DASH;
	v->a[23630] = state(1136);
	v->a[23631] = 2;
	v->a[23632] = sym_variable_assignment;
	v->a[23633] = aux_sym__variable_assignments_repeat1;
	v->a[23634] = actions(772);
	v->a[23635] = 3;
	v->a[23636] = aux_sym_heredoc_redirect_token1;
	v->a[23637] = anon_sym_AMP;
	v->a[23638] = anon_sym_SEMI;
	v->a[23639] = state(1123);
	small_parse_table_1182(v);
}

void	small_parse_table_1182(t_small_parse_table_array *v)
{
	v->a[23640] = 3;
	v->a[23641] = sym_file_redirect;
	v->a[23642] = sym_heredoc_redirect;
	v->a[23643] = aux_sym_redirected_statement_repeat1;
	v->a[23644] = actions(762);
	v->a[23645] = 19;
	v->a[23646] = anon_sym_LT;
	v->a[23647] = anon_sym_GT;
	v->a[23648] = anon_sym_GT_GT;
	v->a[23649] = anon_sym_AMP_GT;
	v->a[23650] = anon_sym_AMP_GT_GT;
	v->a[23651] = anon_sym_LT_AMP;
	v->a[23652] = anon_sym_GT_AMP;
	v->a[23653] = anon_sym_GT_PIPE;
	v->a[23654] = anon_sym_LT_AMP_DASH;
	v->a[23655] = anon_sym_GT_AMP_DASH;
	v->a[23656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23657] = anon_sym_DOLLAR;
	v->a[23658] = anon_sym_DQUOTE;
	v->a[23659] = sym_raw_string;
	small_parse_table_1183(v);
}

void	small_parse_table_1183(t_small_parse_table_array *v)
{
	v->a[23660] = sym_number;
	v->a[23661] = anon_sym_DOLLAR_LBRACE;
	v->a[23662] = anon_sym_DOLLAR_LPAREN;
	v->a[23663] = anon_sym_BQUOTE;
	v->a[23664] = sym_word;
	v->a[23665] = 12;
	v->a[23666] = actions(3);
	v->a[23667] = 1;
	v->a[23668] = sym_comment;
	v->a[23669] = actions(536);
	v->a[23670] = 1;
	v->a[23671] = sym_file_descriptor;
	v->a[23672] = actions(782);
	v->a[23673] = 1;
	v->a[23674] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23675] = actions(785);
	v->a[23676] = 1;
	v->a[23677] = anon_sym_DOLLAR;
	v->a[23678] = actions(788);
	v->a[23679] = 1;
	small_parse_table_1184(v);
}

void	small_parse_table_1184(t_small_parse_table_array *v)
{
	v->a[23680] = anon_sym_DQUOTE;
	v->a[23681] = actions(791);
	v->a[23682] = 1;
	v->a[23683] = anon_sym_DOLLAR_LBRACE;
	v->a[23684] = actions(794);
	v->a[23685] = 1;
	v->a[23686] = anon_sym_DOLLAR_LPAREN;
	v->a[23687] = actions(797);
	v->a[23688] = 1;
	v->a[23689] = anon_sym_BQUOTE;
	v->a[23690] = state(227);
	v->a[23691] = 2;
	v->a[23692] = sym_concatenation;
	v->a[23693] = aux_sym_for_statement_repeat1;
	v->a[23694] = actions(779);
	v->a[23695] = 3;
	v->a[23696] = sym_raw_string;
	v->a[23697] = sym_number;
	v->a[23698] = sym_word;
	v->a[23699] = state(600);
	small_parse_table_1185(v);
}

/* EOF small_parse_table_236.c */
