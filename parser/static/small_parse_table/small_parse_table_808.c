/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_808.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4040(t_small_parse_table_array *v)
{
	v->a[80800] = anon_sym_SEMI_SEMI;
	v->a[80801] = anon_sym_AMP;
	v->a[80802] = anon_sym_SEMI;
	v->a[80803] = 3;
	v->a[80804] = actions(3);
	v->a[80805] = 1;
	v->a[80806] = sym_comment;
	v->a[80807] = actions(757);
	v->a[80808] = 2;
	v->a[80809] = sym_regex;
	v->a[80810] = aux_sym__expansion_regex_token1;
	v->a[80811] = actions(755);
	v->a[80812] = 4;
	v->a[80813] = anon_sym_RPAREN;
	v->a[80814] = anon_sym_RBRACE;
	v->a[80815] = anon_sym_DQUOTE;
	v->a[80816] = sym_raw_string;
	v->a[80817] = 3;
	v->a[80818] = actions(3);
	v->a[80819] = 1;
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = sym_comment;
	v->a[80821] = actions(784);
	v->a[80822] = 2;
	v->a[80823] = sym_regex;
	v->a[80824] = aux_sym__expansion_regex_token1;
	v->a[80825] = actions(782);
	v->a[80826] = 4;
	v->a[80827] = anon_sym_RPAREN;
	v->a[80828] = anon_sym_RBRACE;
	v->a[80829] = anon_sym_DQUOTE;
	v->a[80830] = sym_raw_string;
	v->a[80831] = 3;
	v->a[80832] = actions(3);
	v->a[80833] = 1;
	v->a[80834] = sym_comment;
	v->a[80835] = actions(3620);
	v->a[80836] = 2;
	v->a[80837] = sym_regex;
	v->a[80838] = aux_sym__expansion_regex_token1;
	v->a[80839] = actions(3618);
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = 4;
	v->a[80841] = anon_sym_RPAREN;
	v->a[80842] = anon_sym_RBRACE;
	v->a[80843] = anon_sym_DQUOTE;
	v->a[80844] = sym_raw_string;
	v->a[80845] = 6;
	v->a[80846] = actions(680);
	v->a[80847] = 1;
	v->a[80848] = sym_comment;
	v->a[80849] = actions(3598);
	v->a[80850] = 1;
	v->a[80851] = anon_sym_elif;
	v->a[80852] = actions(3600);
	v->a[80853] = 1;
	v->a[80854] = anon_sym_else;
	v->a[80855] = actions(3622);
	v->a[80856] = 1;
	v->a[80857] = anon_sym_fi;
	v->a[80858] = state(2025);
	v->a[80859] = 1;
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = sym_else_clause;
	v->a[80861] = state(1847);
	v->a[80862] = 2;
	v->a[80863] = sym_elif_clause;
	v->a[80864] = aux_sym_if_statement_repeat1;
	v->a[80865] = 5;
	v->a[80866] = actions(3);
	v->a[80867] = 1;
	v->a[80868] = sym_comment;
	v->a[80869] = actions(3471);
	v->a[80870] = 1;
	v->a[80871] = aux_sym_heredoc_redirect_token1;
	v->a[80872] = actions(3624);
	v->a[80873] = 1;
	v->a[80874] = anon_sym_in;
	v->a[80875] = state(1900);
	v->a[80876] = 1;
	v->a[80877] = sym_terminator;
	v->a[80878] = actions(1966);
	v->a[80879] = 3;
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = anon_sym_SEMI_SEMI;
	v->a[80881] = anon_sym_AMP;
	v->a[80882] = anon_sym_SEMI;
	v->a[80883] = 6;
	v->a[80884] = actions(680);
	v->a[80885] = 1;
	v->a[80886] = sym_comment;
	v->a[80887] = actions(3598);
	v->a[80888] = 1;
	v->a[80889] = anon_sym_elif;
	v->a[80890] = actions(3600);
	v->a[80891] = 1;
	v->a[80892] = anon_sym_else;
	v->a[80893] = actions(3626);
	v->a[80894] = 1;
	v->a[80895] = anon_sym_fi;
	v->a[80896] = state(2136);
	v->a[80897] = 1;
	v->a[80898] = sym_else_clause;
	v->a[80899] = state(1847);
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */
