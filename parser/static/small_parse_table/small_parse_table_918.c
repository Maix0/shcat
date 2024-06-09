/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_918.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4590(t_small_parse_table_array *v)
{
	v->a[91800] = sym_comment;
	v->a[91801] = actions(1329);
	v->a[91802] = 2;
	v->a[91803] = sym__concat;
	v->a[91804] = aux_sym_heredoc_redirect_token1;
	v->a[91805] = actions(1327);
	v->a[91806] = 5;
	v->a[91807] = anon_sym_in;
	v->a[91808] = anon_sym_SEMI_SEMI;
	v->a[91809] = anon_sym_AMP;
	v->a[91810] = aux_sym_concatenation_token1;
	v->a[91811] = anon_sym_SEMI;
	v->a[91812] = 6;
	v->a[91813] = actions(1404);
	v->a[91814] = 1;
	v->a[91815] = sym_comment;
	v->a[91816] = actions(4174);
	v->a[91817] = 1;
	v->a[91818] = anon_sym_fi;
	v->a[91819] = actions(4176);
	small_parse_table_4591(v);
}

void	small_parse_table_4591(t_small_parse_table_array *v)
{
	v->a[91820] = 1;
	v->a[91821] = anon_sym_elif;
	v->a[91822] = actions(4178);
	v->a[91823] = 1;
	v->a[91824] = anon_sym_else;
	v->a[91825] = state(2176);
	v->a[91826] = 1;
	v->a[91827] = sym_else_clause;
	v->a[91828] = state(1918);
	v->a[91829] = 2;
	v->a[91830] = sym_elif_clause;
	v->a[91831] = aux_sym_if_statement_repeat1;
	v->a[91832] = 3;
	v->a[91833] = actions(1257);
	v->a[91834] = 1;
	v->a[91835] = anon_sym_DOLLAR;
	v->a[91836] = actions(1404);
	v->a[91837] = 1;
	v->a[91838] = sym_comment;
	v->a[91839] = actions(1255);
	small_parse_table_4592(v);
}

void	small_parse_table_4592(t_small_parse_table_array *v)
{
	v->a[91840] = 5;
	v->a[91841] = sym_heredoc_content;
	v->a[91842] = sym_heredoc_end;
	v->a[91843] = anon_sym_DOLLAR_LBRACE;
	v->a[91844] = anon_sym_DOLLAR_LPAREN;
	v->a[91845] = anon_sym_BQUOTE;
	v->a[91846] = 3;
	v->a[91847] = actions(1309);
	v->a[91848] = 1;
	v->a[91849] = anon_sym_DOLLAR;
	v->a[91850] = actions(1404);
	v->a[91851] = 1;
	v->a[91852] = sym_comment;
	v->a[91853] = actions(1311);
	v->a[91854] = 5;
	v->a[91855] = sym_heredoc_content;
	v->a[91856] = sym_heredoc_end;
	v->a[91857] = anon_sym_DOLLAR_LBRACE;
	v->a[91858] = anon_sym_DOLLAR_LPAREN;
	v->a[91859] = anon_sym_BQUOTE;
	small_parse_table_4593(v);
}

void	small_parse_table_4593(t_small_parse_table_array *v)
{
	v->a[91860] = 3;
	v->a[91861] = actions(1190);
	v->a[91862] = 1;
	v->a[91863] = anon_sym_DOLLAR;
	v->a[91864] = actions(1404);
	v->a[91865] = 1;
	v->a[91866] = sym_comment;
	v->a[91867] = actions(1192);
	v->a[91868] = 5;
	v->a[91869] = sym_heredoc_content;
	v->a[91870] = sym_heredoc_end;
	v->a[91871] = anon_sym_DOLLAR_LBRACE;
	v->a[91872] = anon_sym_DOLLAR_LPAREN;
	v->a[91873] = anon_sym_BQUOTE;
	v->a[91874] = 6;
	v->a[91875] = actions(1404);
	v->a[91876] = 1;
	v->a[91877] = sym_comment;
	v->a[91878] = actions(4180);
	v->a[91879] = 1;
	small_parse_table_4594(v);
}

void	small_parse_table_4594(t_small_parse_table_array *v)
{
	v->a[91880] = anon_sym_PIPE;
	v->a[91881] = actions(4182);
	v->a[91882] = 1;
	v->a[91883] = anon_sym_RPAREN;
	v->a[91884] = state(1991);
	v->a[91885] = 1;
	v->a[91886] = aux_sym_concatenation_repeat1;
	v->a[91887] = state(2014);
	v->a[91888] = 1;
	v->a[91889] = aux_sym__case_item_last_repeat1;
	v->a[91890] = actions(4184);
	v->a[91891] = 2;
	v->a[91892] = sym__concat;
	v->a[91893] = aux_sym_concatenation_token1;
	v->a[91894] = 3;
	v->a[91895] = actions(3);
	v->a[91896] = 1;
	v->a[91897] = sym_comment;
	v->a[91898] = actions(1319);
	v->a[91899] = 2;
	small_parse_table_4595(v);
}

/* EOF small_parse_table_918.c */
