/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_797.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3985(t_small_parse_table_array *v)
{
	v->a[79700] = sym_comment;
	v->a[79701] = actions(684);
	v->a[79702] = 1;
	v->a[79703] = anon_sym_DOLLAR;
	v->a[79704] = actions(686);
	v->a[79705] = 5;
	v->a[79706] = sym_heredoc_content;
	v->a[79707] = sym_heredoc_end;
	v->a[79708] = anon_sym_DOLLAR_LBRACE;
	v->a[79709] = anon_sym_DOLLAR_LPAREN;
	v->a[79710] = anon_sym_BQUOTE;
	v->a[79711] = 6;
	v->a[79712] = actions(501);
	v->a[79713] = 1;
	v->a[79714] = sym_comment;
	v->a[79715] = actions(3606);
	v->a[79716] = 1;
	v->a[79717] = anon_sym_elif;
	v->a[79718] = actions(3608);
	v->a[79719] = 1;
	small_parse_table_3986(v);
}

void	small_parse_table_3986(t_small_parse_table_array *v)
{
	v->a[79720] = anon_sym_else;
	v->a[79721] = actions(3620);
	v->a[79722] = 1;
	v->a[79723] = anon_sym_fi;
	v->a[79724] = state(2096);
	v->a[79725] = 1;
	v->a[79726] = sym_else_clause;
	v->a[79727] = state(1811);
	v->a[79728] = 2;
	v->a[79729] = sym_elif_clause;
	v->a[79730] = aux_sym_if_statement_repeat1;
	v->a[79731] = 3;
	v->a[79732] = actions(3);
	v->a[79733] = 1;
	v->a[79734] = sym_comment;
	v->a[79735] = actions(686);
	v->a[79736] = 2;
	v->a[79737] = sym__concat;
	v->a[79738] = aux_sym_heredoc_redirect_token1;
	v->a[79739] = actions(684);
	small_parse_table_3987(v);
}

void	small_parse_table_3987(t_small_parse_table_array *v)
{
	v->a[79740] = 4;
	v->a[79741] = anon_sym_in;
	v->a[79742] = anon_sym_SEMI_SEMI;
	v->a[79743] = aux_sym_concatenation_token1;
	v->a[79744] = anon_sym_SEMI;
	v->a[79745] = 3;
	v->a[79746] = actions(501);
	v->a[79747] = 1;
	v->a[79748] = sym_comment;
	v->a[79749] = actions(525);
	v->a[79750] = 1;
	v->a[79751] = anon_sym_DOLLAR;
	v->a[79752] = actions(527);
	v->a[79753] = 5;
	v->a[79754] = sym_heredoc_content;
	v->a[79755] = sym_heredoc_end;
	v->a[79756] = anon_sym_DOLLAR_LBRACE;
	v->a[79757] = anon_sym_DOLLAR_LPAREN;
	v->a[79758] = anon_sym_BQUOTE;
	v->a[79759] = 3;
	small_parse_table_3988(v);
}

void	small_parse_table_3988(t_small_parse_table_array *v)
{
	v->a[79760] = actions(3);
	v->a[79761] = 1;
	v->a[79762] = sym_comment;
	v->a[79763] = actions(1229);
	v->a[79764] = 2;
	v->a[79765] = sym__concat;
	v->a[79766] = aux_sym_heredoc_redirect_token1;
	v->a[79767] = actions(1227);
	v->a[79768] = 4;
	v->a[79769] = anon_sym_in;
	v->a[79770] = anon_sym_SEMI_SEMI;
	v->a[79771] = aux_sym_concatenation_token1;
	v->a[79772] = anon_sym_SEMI;
	v->a[79773] = 3;
	v->a[79774] = actions(3);
	v->a[79775] = 1;
	v->a[79776] = sym_comment;
	v->a[79777] = actions(731);
	v->a[79778] = 2;
	v->a[79779] = sym__concat;
	small_parse_table_3989(v);
}

void	small_parse_table_3989(t_small_parse_table_array *v)
{
	v->a[79780] = aux_sym_heredoc_redirect_token1;
	v->a[79781] = actions(729);
	v->a[79782] = 4;
	v->a[79783] = anon_sym_in;
	v->a[79784] = anon_sym_SEMI_SEMI;
	v->a[79785] = aux_sym_concatenation_token1;
	v->a[79786] = anon_sym_SEMI;
	v->a[79787] = 6;
	v->a[79788] = actions(501);
	v->a[79789] = 1;
	v->a[79790] = sym_comment;
	v->a[79791] = actions(3606);
	v->a[79792] = 1;
	v->a[79793] = anon_sym_elif;
	v->a[79794] = actions(3608);
	v->a[79795] = 1;
	v->a[79796] = anon_sym_else;
	v->a[79797] = actions(3622);
	v->a[79798] = 1;
	v->a[79799] = anon_sym_fi;
	small_parse_table_3990(v);
}

/* EOF small_parse_table_797.c */
