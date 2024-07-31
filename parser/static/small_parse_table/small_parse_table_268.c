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
	v->a[26800] = anon_sym_PIPE_PIPE;
	v->a[26801] = anon_sym_LT;
	v->a[26802] = anon_sym_GT;
	v->a[26803] = anon_sym_GT_GT;
	v->a[26804] = anon_sym_LT_AMP;
	v->a[26805] = anon_sym_GT_AMP;
	v->a[26806] = anon_sym_GT_PIPE;
	v->a[26807] = anon_sym_LT_GT;
	v->a[26808] = anon_sym_LT_LT;
	v->a[26809] = anon_sym_LT_LT_DASH;
	v->a[26810] = aux_sym_heredoc_redirect_token1;
	v->a[26811] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26812] = anon_sym_DOLLAR;
	v->a[26813] = anon_sym_DQUOTE;
	v->a[26814] = sym_raw_string;
	v->a[26815] = sym_number;
	v->a[26816] = anon_sym_DOLLAR_LBRACE;
	v->a[26817] = anon_sym_DOLLAR_LPAREN;
	v->a[26818] = anon_sym_BQUOTE;
	v->a[26819] = sym_word;
	small_parse_table_1341(v);
}

void	small_parse_table_1341(t_small_parse_table_array *v)
{
	v->a[26820] = anon_sym_SEMI;
	v->a[26821] = 7;
	v->a[26822] = actions(3);
	v->a[26823] = 1;
	v->a[26824] = sym_comment;
	v->a[26825] = actions(975);
	v->a[26826] = 1;
	v->a[26827] = sym__bare_dollar;
	v->a[26828] = actions(987);
	v->a[26829] = 1;
	v->a[26830] = aux_sym_concatenation_token1;
	v->a[26831] = actions(989);
	v->a[26832] = 1;
	v->a[26833] = sym__concat;
	v->a[26834] = actions(1081);
	v->a[26835] = 1;
	v->a[26836] = anon_sym_LPAREN;
	v->a[26837] = state(446);
	v->a[26838] = 1;
	v->a[26839] = aux_sym_concatenation_repeat1;
	small_parse_table_1342(v);
}

void	small_parse_table_1342(t_small_parse_table_array *v)
{
	v->a[26840] = actions(967);
	v->a[26841] = 24;
	v->a[26842] = anon_sym_PIPE;
	v->a[26843] = anon_sym_SEMI_SEMI;
	v->a[26844] = anon_sym_AMP_AMP;
	v->a[26845] = anon_sym_PIPE_PIPE;
	v->a[26846] = anon_sym_LT;
	v->a[26847] = anon_sym_GT;
	v->a[26848] = anon_sym_GT_GT;
	v->a[26849] = anon_sym_LT_AMP;
	v->a[26850] = anon_sym_GT_AMP;
	v->a[26851] = anon_sym_GT_PIPE;
	v->a[26852] = anon_sym_LT_GT;
	v->a[26853] = anon_sym_LT_LT;
	v->a[26854] = anon_sym_LT_LT_DASH;
	v->a[26855] = aux_sym_heredoc_redirect_token1;
	v->a[26856] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26857] = anon_sym_DOLLAR;
	v->a[26858] = anon_sym_DQUOTE;
	v->a[26859] = sym_raw_string;
	small_parse_table_1343(v);
}

void	small_parse_table_1343(t_small_parse_table_array *v)
{
	v->a[26860] = sym_number;
	v->a[26861] = anon_sym_DOLLAR_LBRACE;
	v->a[26862] = anon_sym_DOLLAR_LPAREN;
	v->a[26863] = anon_sym_BQUOTE;
	v->a[26864] = sym_word;
	v->a[26865] = anon_sym_SEMI;
	v->a[26866] = 6;
	v->a[26867] = actions(3);
	v->a[26868] = 1;
	v->a[26869] = sym_comment;
	v->a[26870] = actions(971);
	v->a[26871] = 1;
	v->a[26872] = aux_sym_concatenation_token1;
	v->a[26873] = actions(973);
	v->a[26874] = 1;
	v->a[26875] = sym__concat;
	v->a[26876] = actions(975);
	v->a[26877] = 1;
	v->a[26878] = sym__bare_dollar;
	v->a[26879] = state(334);
	small_parse_table_1344(v);
}

void	small_parse_table_1344(t_small_parse_table_array *v)
{
	v->a[26880] = 1;
	v->a[26881] = aux_sym_concatenation_repeat1;
	v->a[26882] = actions(967);
	v->a[26883] = 25;
	v->a[26884] = anon_sym_esac;
	v->a[26885] = anon_sym_PIPE;
	v->a[26886] = anon_sym_SEMI_SEMI;
	v->a[26887] = anon_sym_AMP_AMP;
	v->a[26888] = anon_sym_PIPE_PIPE;
	v->a[26889] = anon_sym_LT;
	v->a[26890] = anon_sym_GT;
	v->a[26891] = anon_sym_GT_GT;
	v->a[26892] = anon_sym_LT_AMP;
	v->a[26893] = anon_sym_GT_AMP;
	v->a[26894] = anon_sym_GT_PIPE;
	v->a[26895] = anon_sym_LT_GT;
	v->a[26896] = anon_sym_LT_LT;
	v->a[26897] = anon_sym_LT_LT_DASH;
	v->a[26898] = aux_sym_heredoc_redirect_token1;
	v->a[26899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1345(v);
}

/* EOF small_parse_table_268.c */
