/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3108.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15540(t_small_parse_table_array *v)
{
	v->a[310800] = anon_sym_DASH;
	v->a[310801] = anon_sym_STAR;
	v->a[310802] = anon_sym_SLASH;
	v->a[310803] = anon_sym_PERCENT;
	v->a[310804] = 6;
	v->a[310805] = actions(71);
	v->a[310806] = 1;
	v->a[310807] = sym_comment;
	v->a[310808] = actions(14486);
	v->a[310809] = 1;
	v->a[310810] = anon_sym_fi;
	v->a[310811] = actions(14488);
	v->a[310812] = 1;
	v->a[310813] = anon_sym_elif;
	v->a[310814] = actions(14490);
	v->a[310815] = 1;
	v->a[310816] = anon_sym_else;
	v->a[310817] = state(7320);
	v->a[310818] = 1;
	v->a[310819] = sym_else_clause;
	small_parse_table_15541(v);
}

void	small_parse_table_15541(t_small_parse_table_array *v)
{
	v->a[310820] = state(6400);
	v->a[310821] = 2;
	v->a[310822] = sym_elif_clause;
	v->a[310823] = aux_sym_if_statement_repeat1;
	v->a[310824] = 3;
	v->a[310825] = actions(71);
	v->a[310826] = 1;
	v->a[310827] = sym_comment;
	v->a[310828] = actions(14492);
	v->a[310829] = 1;
	v->a[310830] = anon_sym_RBRACE3;
	v->a[310831] = actions(14449);
	v->a[310832] = 5;
	v->a[310833] = anon_sym_PLUS;
	v->a[310834] = anon_sym_DASH;
	v->a[310835] = anon_sym_STAR;
	v->a[310836] = anon_sym_SLASH;
	v->a[310837] = anon_sym_PERCENT;
	v->a[310838] = 3;
	v->a[310839] = actions(71);
	small_parse_table_15542(v);
}

void	small_parse_table_15542(t_small_parse_table_array *v)
{
	v->a[310840] = 1;
	v->a[310841] = sym_comment;
	v->a[310842] = actions(14482);
	v->a[310843] = 1;
	v->a[310844] = anon_sym_RBRACE3;
	v->a[310845] = actions(14437);
	v->a[310846] = 5;
	v->a[310847] = anon_sym_PLUS;
	v->a[310848] = anon_sym_DASH;
	v->a[310849] = anon_sym_STAR;
	v->a[310850] = anon_sym_SLASH;
	v->a[310851] = anon_sym_PERCENT;
	v->a[310852] = 3;
	v->a[310853] = actions(71);
	v->a[310854] = 1;
	v->a[310855] = sym_comment;
	v->a[310856] = actions(14494);
	v->a[310857] = 1;
	v->a[310858] = anon_sym_RBRACE3;
	v->a[310859] = actions(14449);
	small_parse_table_15543(v);
}

void	small_parse_table_15543(t_small_parse_table_array *v)
{
	v->a[310860] = 5;
	v->a[310861] = anon_sym_PLUS;
	v->a[310862] = anon_sym_DASH;
	v->a[310863] = anon_sym_STAR;
	v->a[310864] = anon_sym_SLASH;
	v->a[310865] = anon_sym_PERCENT;
	v->a[310866] = 6;
	v->a[310867] = actions(71);
	v->a[310868] = 1;
	v->a[310869] = sym_comment;
	v->a[310870] = actions(465);
	v->a[310871] = 1;
	v->a[310872] = anon_sym_DOLLAR_LBRACE;
	v->a[310873] = actions(469);
	v->a[310874] = 1;
	v->a[310875] = anon_sym_BQUOTE;
	v->a[310876] = actions(471);
	v->a[310877] = 1;
	v->a[310878] = anon_sym_DOLLAR_BQUOTE;
	v->a[310879] = actions(14496);
	small_parse_table_15544(v);
}

void	small_parse_table_15544(t_small_parse_table_array *v)
{
	v->a[310880] = 1;
	v->a[310881] = anon_sym_DOLLAR_LPAREN;
	v->a[310882] = state(887);
	v->a[310883] = 2;
	v->a[310884] = sym_expansion;
	v->a[310885] = sym_command_substitution;
	v->a[310886] = 6;
	v->a[310887] = actions(3);
	v->a[310888] = 1;
	v->a[310889] = sym_comment;
	v->a[310890] = actions(14500);
	v->a[310891] = 1;
	v->a[310892] = anon_sym_COMMA;
	v->a[310893] = actions(14502);
	v->a[310894] = 1;
	v->a[310895] = aux_sym_heredoc_redirect_token1;
	v->a[310896] = state(4651);
	v->a[310897] = 1;
	v->a[310898] = sym__c_terminator;
	v->a[310899] = state(6334);
	small_parse_table_15545(v);
}

/* EOF small_parse_table_3108.c */
