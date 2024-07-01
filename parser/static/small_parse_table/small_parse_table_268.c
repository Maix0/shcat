/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_268.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1340(t_small_parse_table_array *v)
{
	v->a[26800] = aux_sym_heredoc_redirect_token1;
	v->a[26801] = anon_sym_AMP;
	v->a[26802] = anon_sym_SEMI;
	v->a[26803] = actions(678);
	v->a[26804] = 17;
	v->a[26805] = anon_sym_LT;
	v->a[26806] = anon_sym_GT;
	v->a[26807] = anon_sym_GT_GT;
	v->a[26808] = anon_sym_LT_AMP;
	v->a[26809] = anon_sym_GT_AMP;
	v->a[26810] = anon_sym_GT_PIPE;
	v->a[26811] = anon_sym_LT_AMP_DASH;
	v->a[26812] = anon_sym_GT_AMP_DASH;
	v->a[26813] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26814] = anon_sym_DOLLAR;
	v->a[26815] = anon_sym_DQUOTE;
	v->a[26816] = sym_raw_string;
	v->a[26817] = sym_number;
	v->a[26818] = anon_sym_DOLLAR_LBRACE;
	v->a[26819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1341(v);
}

void	small_parse_table_1341(t_small_parse_table_array *v)
{
	v->a[26820] = anon_sym_BQUOTE;
	v->a[26821] = sym_word;
	v->a[26822] = 3;
	v->a[26823] = actions(870);
	v->a[26824] = 1;
	v->a[26825] = sym_comment;
	v->a[26826] = actions(1025);
	v->a[26827] = 13;
	v->a[26828] = anon_sym_PIPE;
	v->a[26829] = anon_sym_EQ;
	v->a[26830] = anon_sym_LT;
	v->a[26831] = anon_sym_GT;
	v->a[26832] = anon_sym_GT_GT;
	v->a[26833] = anon_sym_LT_LT;
	v->a[26834] = anon_sym_CARET;
	v->a[26835] = anon_sym_AMP;
	v->a[26836] = anon_sym_PLUS;
	v->a[26837] = anon_sym_DASH;
	v->a[26838] = anon_sym_STAR;
	v->a[26839] = anon_sym_SLASH;
	small_parse_table_1342(v);
}

void	small_parse_table_1342(t_small_parse_table_array *v)
{
	v->a[26840] = anon_sym_PERCENT;
	v->a[26841] = actions(1027);
	v->a[26842] = 21;
	v->a[26843] = anon_sym_AMP_AMP;
	v->a[26844] = anon_sym_PIPE_PIPE;
	v->a[26845] = anon_sym_RPAREN_RPAREN;
	v->a[26846] = anon_sym_PLUS_EQ;
	v->a[26847] = anon_sym_DASH_EQ;
	v->a[26848] = anon_sym_STAR_EQ;
	v->a[26849] = anon_sym_SLASH_EQ;
	v->a[26850] = anon_sym_PERCENT_EQ;
	v->a[26851] = anon_sym_LT_LT_EQ;
	v->a[26852] = anon_sym_GT_GT_EQ;
	v->a[26853] = anon_sym_AMP_EQ;
	v->a[26854] = anon_sym_CARET_EQ;
	v->a[26855] = anon_sym_PIPE_EQ;
	v->a[26856] = anon_sym_EQ_EQ;
	v->a[26857] = anon_sym_BANG_EQ;
	v->a[26858] = anon_sym_LT_EQ;
	v->a[26859] = anon_sym_GT_EQ;
	small_parse_table_1343(v);
}

void	small_parse_table_1343(t_small_parse_table_array *v)
{
	v->a[26860] = anon_sym_QMARK;
	v->a[26861] = anon_sym_COLON;
	v->a[26862] = anon_sym_PLUS_PLUS2;
	v->a[26863] = anon_sym_DASH_DASH2;
	v->a[26864] = 16;
	v->a[26865] = actions(842);
	v->a[26866] = 1;
	v->a[26867] = anon_sym_PIPE;
	v->a[26868] = actions(844);
	v->a[26869] = 1;
	v->a[26870] = anon_sym_AMP_AMP;
	v->a[26871] = actions(846);
	v->a[26872] = 1;
	v->a[26873] = anon_sym_PIPE_PIPE;
	v->a[26874] = actions(856);
	v->a[26875] = 1;
	v->a[26876] = anon_sym_CARET;
	v->a[26877] = actions(858);
	v->a[26878] = 1;
	v->a[26879] = anon_sym_AMP;
	small_parse_table_1344(v);
}

void	small_parse_table_1344(t_small_parse_table_array *v)
{
	v->a[26880] = actions(870);
	v->a[26881] = 1;
	v->a[26882] = sym_comment;
	v->a[26883] = actions(872);
	v->a[26884] = 1;
	v->a[26885] = anon_sym_EQ;
	v->a[26886] = actions(1023);
	v->a[26887] = 1;
	v->a[26888] = anon_sym_QMARK;
	v->a[26889] = actions(850);
	v->a[26890] = 2;
	v->a[26891] = anon_sym_LT;
	v->a[26892] = anon_sym_GT;
	v->a[26893] = actions(852);
	v->a[26894] = 2;
	v->a[26895] = anon_sym_GT_GT;
	v->a[26896] = anon_sym_LT_LT;
	v->a[26897] = actions(860);
	v->a[26898] = 2;
	v->a[26899] = anon_sym_EQ_EQ;
	small_parse_table_1345(v);
}

/* EOF small_parse_table_268.c */
