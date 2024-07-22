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
	v->a[31600] = anon_sym_GT_PIPE;
	v->a[31601] = anon_sym_LT_GT;
	v->a[31602] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31603] = anon_sym_DOLLAR;
	v->a[31604] = anon_sym_DQUOTE;
	v->a[31605] = sym_raw_string;
	v->a[31606] = sym_number;
	v->a[31607] = anon_sym_DOLLAR_LBRACE;
	v->a[31608] = anon_sym_DOLLAR_LPAREN;
	v->a[31609] = anon_sym_BQUOTE;
	v->a[31610] = sym_word;
	v->a[31611] = 6;
	v->a[31612] = actions(3);
	v->a[31613] = 1;
	v->a[31614] = sym_comment;
	v->a[31615] = actions(1237);
	v->a[31616] = 1;
	v->a[31617] = aux_sym_concatenation_token1;
	v->a[31618] = actions(1241);
	v->a[31619] = 1;
	small_parse_table_1581(v);
}

void	small_parse_table_1581(t_small_parse_table_array *v)
{
	v->a[31620] = sym__concat;
	v->a[31621] = state(451);
	v->a[31622] = 1;
	v->a[31623] = aux_sym_concatenation_repeat1;
	v->a[31624] = actions(1239);
	v->a[31625] = 2;
	v->a[31626] = sym_file_descriptor;
	v->a[31627] = sym__bare_dollar;
	v->a[31628] = actions(1235);
	v->a[31629] = 25;
	v->a[31630] = anon_sym_esac;
	v->a[31631] = anon_sym_PIPE;
	v->a[31632] = anon_sym_SEMI_SEMI;
	v->a[31633] = anon_sym_AMP_AMP;
	v->a[31634] = anon_sym_PIPE_PIPE;
	v->a[31635] = anon_sym_LT;
	v->a[31636] = anon_sym_GT;
	v->a[31637] = anon_sym_GT_GT;
	v->a[31638] = anon_sym_LT_AMP;
	v->a[31639] = anon_sym_GT_AMP;
	small_parse_table_1582(v);
}

void	small_parse_table_1582(t_small_parse_table_array *v)
{
	v->a[31640] = anon_sym_GT_PIPE;
	v->a[31641] = anon_sym_LT_GT;
	v->a[31642] = anon_sym_LT_LT;
	v->a[31643] = anon_sym_LT_LT_DASH;
	v->a[31644] = aux_sym_heredoc_redirect_token1;
	v->a[31645] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31646] = anon_sym_DOLLAR;
	v->a[31647] = anon_sym_DQUOTE;
	v->a[31648] = sym_raw_string;
	v->a[31649] = sym_number;
	v->a[31650] = anon_sym_DOLLAR_LBRACE;
	v->a[31651] = anon_sym_DOLLAR_LPAREN;
	v->a[31652] = anon_sym_BQUOTE;
	v->a[31653] = sym_word;
	v->a[31654] = anon_sym_SEMI;
	v->a[31655] = 6;
	v->a[31656] = actions(3);
	v->a[31657] = 1;
	v->a[31658] = sym_comment;
	v->a[31659] = actions(1243);
	small_parse_table_1583(v);
}

void	small_parse_table_1583(t_small_parse_table_array *v)
{
	v->a[31660] = 1;
	v->a[31661] = aux_sym_concatenation_token1;
	v->a[31662] = actions(1245);
	v->a[31663] = 1;
	v->a[31664] = sym__concat;
	v->a[31665] = state(384);
	v->a[31666] = 1;
	v->a[31667] = aux_sym_concatenation_repeat1;
	v->a[31668] = actions(1097);
	v->a[31669] = 2;
	v->a[31670] = sym_file_descriptor;
	v->a[31671] = sym__bare_dollar;
	v->a[31672] = actions(1099);
	v->a[31673] = 25;
	v->a[31674] = anon_sym_PIPE;
	v->a[31675] = anon_sym_RPAREN;
	v->a[31676] = anon_sym_SEMI_SEMI;
	v->a[31677] = anon_sym_AMP_AMP;
	v->a[31678] = anon_sym_PIPE_PIPE;
	v->a[31679] = anon_sym_LT;
	small_parse_table_1584(v);
}

void	small_parse_table_1584(t_small_parse_table_array *v)
{
	v->a[31680] = anon_sym_GT;
	v->a[31681] = anon_sym_GT_GT;
	v->a[31682] = anon_sym_LT_AMP;
	v->a[31683] = anon_sym_GT_AMP;
	v->a[31684] = anon_sym_GT_PIPE;
	v->a[31685] = anon_sym_LT_GT;
	v->a[31686] = anon_sym_LT_LT;
	v->a[31687] = anon_sym_LT_LT_DASH;
	v->a[31688] = aux_sym_heredoc_redirect_token1;
	v->a[31689] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31690] = anon_sym_DOLLAR;
	v->a[31691] = anon_sym_DQUOTE;
	v->a[31692] = sym_raw_string;
	v->a[31693] = sym_number;
	v->a[31694] = anon_sym_DOLLAR_LBRACE;
	v->a[31695] = anon_sym_DOLLAR_LPAREN;
	v->a[31696] = anon_sym_BQUOTE;
	v->a[31697] = sym_word;
	v->a[31698] = anon_sym_SEMI;
	v->a[31699] = 3;
	small_parse_table_1585(v);
}

/* EOF small_parse_table_316.c */
