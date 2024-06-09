/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_316.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1580(t_small_parse_table_array *v)
{
	v->a[31600] = anon_sym_GT_AMP_DASH;
	v->a[31601] = anon_sym_LT_LT;
	v->a[31602] = anon_sym_LT_LT_DASH;
	v->a[31603] = aux_sym_heredoc_redirect_token1;
	v->a[31604] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31605] = anon_sym_AMP;
	v->a[31606] = anon_sym_DOLLAR;
	v->a[31607] = anon_sym_DQUOTE;
	v->a[31608] = sym_raw_string;
	v->a[31609] = aux_sym_number_token1;
	v->a[31610] = aux_sym_number_token2;
	v->a[31611] = anon_sym_DOLLAR_LBRACE;
	v->a[31612] = anon_sym_DOLLAR_LPAREN;
	v->a[31613] = anon_sym_BQUOTE;
	v->a[31614] = sym_word;
	v->a[31615] = anon_sym_SEMI;
	v->a[31616] = 16;
	v->a[31617] = actions(3);
	v->a[31618] = 1;
	v->a[31619] = sym_comment;
	small_parse_table_1581(v);
}

void	small_parse_table_1581(t_small_parse_table_array *v)
{
	v->a[31620] = actions(598);
	v->a[31621] = 1;
	v->a[31622] = sym_file_descriptor;
	v->a[31623] = actions(1268);
	v->a[31624] = 1;
	v->a[31625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31626] = actions(1271);
	v->a[31627] = 1;
	v->a[31628] = anon_sym_DOLLAR;
	v->a[31629] = actions(1274);
	v->a[31630] = 1;
	v->a[31631] = anon_sym_DQUOTE;
	v->a[31632] = actions(1277);
	v->a[31633] = 1;
	v->a[31634] = aux_sym_number_token1;
	v->a[31635] = actions(1280);
	v->a[31636] = 1;
	v->a[31637] = aux_sym_number_token2;
	v->a[31638] = actions(1283);
	v->a[31639] = 1;
	small_parse_table_1582(v);
}

void	small_parse_table_1582(t_small_parse_table_array *v)
{
	v->a[31640] = anon_sym_DOLLAR_LBRACE;
	v->a[31641] = actions(1286);
	v->a[31642] = 1;
	v->a[31643] = anon_sym_DOLLAR_LPAREN;
	v->a[31644] = actions(1289);
	v->a[31645] = 1;
	v->a[31646] = anon_sym_BQUOTE;
	v->a[31647] = actions(1292);
	v->a[31648] = 1;
	v->a[31649] = sym__bare_dollar;
	v->a[31650] = state(342);
	v->a[31651] = 1;
	v->a[31652] = aux_sym_command_repeat2;
	v->a[31653] = state(932);
	v->a[31654] = 1;
	v->a[31655] = sym_concatenation;
	v->a[31656] = actions(1265);
	v->a[31657] = 2;
	v->a[31658] = sym_raw_string;
	v->a[31659] = sym_word;
	small_parse_table_1583(v);
}

void	small_parse_table_1583(t_small_parse_table_array *v)
{
	v->a[31660] = state(800);
	v->a[31661] = 6;
	v->a[31662] = sym_arithmetic_expansion;
	v->a[31663] = sym_string;
	v->a[31664] = sym_number;
	v->a[31665] = sym_simple_expansion;
	v->a[31666] = sym_expansion;
	v->a[31667] = sym_command_substitution;
	v->a[31668] = actions(572);
	v->a[31669] = 15;
	v->a[31670] = anon_sym_PIPE;
	v->a[31671] = anon_sym_AMP_AMP;
	v->a[31672] = anon_sym_PIPE_PIPE;
	v->a[31673] = anon_sym_LT;
	v->a[31674] = anon_sym_GT;
	v->a[31675] = anon_sym_GT_GT;
	v->a[31676] = anon_sym_AMP_GT;
	v->a[31677] = anon_sym_AMP_GT_GT;
	v->a[31678] = anon_sym_LT_AMP;
	v->a[31679] = anon_sym_GT_AMP;
	small_parse_table_1584(v);
}

void	small_parse_table_1584(t_small_parse_table_array *v)
{
	v->a[31680] = anon_sym_GT_PIPE;
	v->a[31681] = anon_sym_LT_AMP_DASH;
	v->a[31682] = anon_sym_GT_AMP_DASH;
	v->a[31683] = anon_sym_LT_LT;
	v->a[31684] = anon_sym_LT_LT_DASH;
	v->a[31685] = 6;
	v->a[31686] = actions(3);
	v->a[31687] = 1;
	v->a[31688] = sym_comment;
	v->a[31689] = actions(1295);
	v->a[31690] = 1;
	v->a[31691] = aux_sym_concatenation_token1;
	v->a[31692] = actions(1297);
	v->a[31693] = 1;
	v->a[31694] = sym__concat;
	v->a[31695] = state(400);
	v->a[31696] = 1;
	v->a[31697] = aux_sym_concatenation_repeat1;
	v->a[31698] = actions(1261);
	v->a[31699] = 3;
	small_parse_table_1585(v);
}

/* EOF small_parse_table_316.c */
