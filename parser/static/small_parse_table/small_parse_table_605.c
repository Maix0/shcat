/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_605.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3025(t_small_parse_table_array *v)
{
	v->a[60500] = 3;
	v->a[60501] = sym_file_redirect;
	v->a[60502] = sym_heredoc_redirect;
	v->a[60503] = aux_sym_redirected_statement_repeat1;
	v->a[60504] = actions(1941);
	v->a[60505] = 7;
	v->a[60506] = anon_sym_LT;
	v->a[60507] = anon_sym_GT;
	v->a[60508] = anon_sym_GT_GT;
	v->a[60509] = anon_sym_LT_AMP;
	v->a[60510] = anon_sym_GT_AMP;
	v->a[60511] = anon_sym_GT_PIPE;
	v->a[60512] = anon_sym_LT_GT;
	v->a[60513] = 5;
	v->a[60514] = actions(3);
	v->a[60515] = 1;
	v->a[60516] = sym_comment;
	v->a[60517] = actions(792);
	v->a[60518] = 1;
	v->a[60519] = sym_file_descriptor;
	small_parse_table_3026(v);
}

void	small_parse_table_3026(t_small_parse_table_array *v)
{
	v->a[60520] = actions(794);
	v->a[60521] = 1;
	v->a[60522] = sym_variable_name;
	v->a[60523] = state(1109);
	v->a[60524] = 2;
	v->a[60525] = sym_variable_assignment;
	v->a[60526] = aux_sym__variable_assignments_repeat1;
	v->a[60527] = actions(780);
	v->a[60528] = 16;
	v->a[60529] = anon_sym_LT;
	v->a[60530] = anon_sym_GT;
	v->a[60531] = anon_sym_GT_GT;
	v->a[60532] = anon_sym_LT_AMP;
	v->a[60533] = anon_sym_GT_AMP;
	v->a[60534] = anon_sym_GT_PIPE;
	v->a[60535] = anon_sym_LT_GT;
	v->a[60536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60537] = anon_sym_DOLLAR;
	v->a[60538] = anon_sym_DQUOTE;
	v->a[60539] = sym_raw_string;
	small_parse_table_3027(v);
}

void	small_parse_table_3027(t_small_parse_table_array *v)
{
	v->a[60540] = sym_number;
	v->a[60541] = anon_sym_DOLLAR_LBRACE;
	v->a[60542] = anon_sym_DOLLAR_LPAREN;
	v->a[60543] = anon_sym_BQUOTE;
	v->a[60544] = sym_word;
	v->a[60545] = 12;
	v->a[60546] = actions(3);
	v->a[60547] = 1;
	v->a[60548] = sym_comment;
	v->a[60549] = actions(1012);
	v->a[60550] = 1;
	v->a[60551] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60552] = actions(1014);
	v->a[60553] = 1;
	v->a[60554] = anon_sym_DOLLAR;
	v->a[60555] = actions(1016);
	v->a[60556] = 1;
	v->a[60557] = anon_sym_DQUOTE;
	v->a[60558] = actions(1018);
	v->a[60559] = 1;
	small_parse_table_3028(v);
}

void	small_parse_table_3028(t_small_parse_table_array *v)
{
	v->a[60560] = anon_sym_DOLLAR_LBRACE;
	v->a[60561] = actions(1020);
	v->a[60562] = 1;
	v->a[60563] = anon_sym_DOLLAR_LPAREN;
	v->a[60564] = actions(1022);
	v->a[60565] = 1;
	v->a[60566] = anon_sym_BQUOTE;
	v->a[60567] = state(1908);
	v->a[60568] = 1;
	v->a[60569] = sym_terminator;
	v->a[60570] = state(1132);
	v->a[60571] = 2;
	v->a[60572] = sym_concatenation;
	v->a[60573] = aux_sym_for_statement_repeat1;
	v->a[60574] = actions(1973);
	v->a[60575] = 3;
	v->a[60576] = sym_raw_string;
	v->a[60577] = sym_number;
	v->a[60578] = sym_word;
	v->a[60579] = actions(1975);
	small_parse_table_3029(v);
}

void	small_parse_table_3029(t_small_parse_table_array *v)
{
	v->a[60580] = 3;
	v->a[60581] = anon_sym_SEMI_SEMI;
	v->a[60582] = aux_sym_heredoc_redirect_token1;
	v->a[60583] = anon_sym_SEMI;
	v->a[60584] = state(1424);
	v->a[60585] = 5;
	v->a[60586] = sym_arithmetic_expansion;
	v->a[60587] = sym_string;
	v->a[60588] = sym_simple_expansion;
	v->a[60589] = sym_expansion;
	v->a[60590] = sym_command_substitution;
	v->a[60591] = 5;
	v->a[60592] = actions(3);
	v->a[60593] = 1;
	v->a[60594] = sym_comment;
	v->a[60595] = actions(2054);
	v->a[60596] = 1;
	v->a[60597] = sym_variable_name;
	v->a[60598] = actions(1977);
	v->a[60599] = 2;
	small_parse_table_3030(v);
}

/* EOF small_parse_table_605.c */
