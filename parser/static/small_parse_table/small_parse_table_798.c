/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_798.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3990(t_small_parse_table_array *v)
{
	v->a[79800] = state(2093);
	v->a[79801] = 1;
	v->a[79802] = sym_else_clause;
	v->a[79803] = state(1811);
	v->a[79804] = 2;
	v->a[79805] = sym_elif_clause;
	v->a[79806] = aux_sym_if_statement_repeat1;
	v->a[79807] = 3;
	v->a[79808] = actions(3);
	v->a[79809] = 1;
	v->a[79810] = sym_comment;
	v->a[79811] = actions(515);
	v->a[79812] = 2;
	v->a[79813] = sym__concat;
	v->a[79814] = aux_sym_heredoc_redirect_token1;
	v->a[79815] = actions(513);
	v->a[79816] = 4;
	v->a[79817] = anon_sym_in;
	v->a[79818] = anon_sym_SEMI_SEMI;
	v->a[79819] = aux_sym_concatenation_token1;
	small_parse_table_3991(v);
}

void	small_parse_table_3991(t_small_parse_table_array *v)
{
	v->a[79820] = anon_sym_SEMI;
	v->a[79821] = 3;
	v->a[79822] = actions(3);
	v->a[79823] = 1;
	v->a[79824] = sym_comment;
	v->a[79825] = actions(682);
	v->a[79826] = 2;
	v->a[79827] = sym__concat;
	v->a[79828] = aux_sym_heredoc_redirect_token1;
	v->a[79829] = actions(680);
	v->a[79830] = 4;
	v->a[79831] = anon_sym_in;
	v->a[79832] = anon_sym_SEMI_SEMI;
	v->a[79833] = aux_sym_concatenation_token1;
	v->a[79834] = anon_sym_SEMI;
	v->a[79835] = 3;
	v->a[79836] = actions(3);
	v->a[79837] = 1;
	v->a[79838] = sym_comment;
	v->a[79839] = actions(694);
	small_parse_table_3992(v);
}

void	small_parse_table_3992(t_small_parse_table_array *v)
{
	v->a[79840] = 2;
	v->a[79841] = sym__concat;
	v->a[79842] = aux_sym_heredoc_redirect_token1;
	v->a[79843] = actions(692);
	v->a[79844] = 4;
	v->a[79845] = anon_sym_in;
	v->a[79846] = anon_sym_SEMI_SEMI;
	v->a[79847] = aux_sym_concatenation_token1;
	v->a[79848] = anon_sym_SEMI;
	v->a[79849] = 3;
	v->a[79850] = actions(501);
	v->a[79851] = 1;
	v->a[79852] = sym_comment;
	v->a[79853] = actions(680);
	v->a[79854] = 1;
	v->a[79855] = anon_sym_DOLLAR;
	v->a[79856] = actions(682);
	v->a[79857] = 5;
	v->a[79858] = sym_heredoc_content;
	v->a[79859] = sym_heredoc_end;
	small_parse_table_3993(v);
}

void	small_parse_table_3993(t_small_parse_table_array *v)
{
	v->a[79860] = anon_sym_DOLLAR_LBRACE;
	v->a[79861] = anon_sym_DOLLAR_LPAREN;
	v->a[79862] = anon_sym_BQUOTE;
	v->a[79863] = 6;
	v->a[79864] = actions(501);
	v->a[79865] = 1;
	v->a[79866] = sym_comment;
	v->a[79867] = actions(3596);
	v->a[79868] = 1;
	v->a[79869] = anon_sym_PIPE;
	v->a[79870] = actions(3624);
	v->a[79871] = 1;
	v->a[79872] = anon_sym_RPAREN;
	v->a[79873] = state(1817);
	v->a[79874] = 1;
	v->a[79875] = aux_sym_concatenation_repeat1;
	v->a[79876] = state(1880);
	v->a[79877] = 1;
	v->a[79878] = aux_sym__case_item_last_repeat1;
	v->a[79879] = actions(3600);
	small_parse_table_3994(v);
}

void	small_parse_table_3994(t_small_parse_table_array *v)
{
	v->a[79880] = 2;
	v->a[79881] = sym__concat;
	v->a[79882] = aux_sym_concatenation_token1;
	v->a[79883] = 3;
	v->a[79884] = actions(3);
	v->a[79885] = 1;
	v->a[79886] = sym_comment;
	v->a[79887] = actions(515);
	v->a[79888] = 2;
	v->a[79889] = sym_regex;
	v->a[79890] = aux_sym__expansion_regex_token1;
	v->a[79891] = actions(513);
	v->a[79892] = 4;
	v->a[79893] = anon_sym_RPAREN;
	v->a[79894] = anon_sym_RBRACE;
	v->a[79895] = anon_sym_DQUOTE;
	v->a[79896] = sym_raw_string;
	v->a[79897] = 3;
	v->a[79898] = actions(501);
	v->a[79899] = 1;
	small_parse_table_3995(v);
}

/* EOF small_parse_table_798.c */
