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
	v->a[60500] = anon_sym_AMP;
	v->a[60501] = anon_sym_SEMI;
	v->a[60502] = actions(700);
	v->a[60503] = 2;
	v->a[60504] = anon_sym_LT_LT;
	v->a[60505] = anon_sym_LT_LT_DASH;
	v->a[60506] = actions(914);
	v->a[60507] = 2;
	v->a[60508] = anon_sym_AMP_AMP;
	v->a[60509] = anon_sym_PIPE_PIPE;
	v->a[60510] = state(1134);
	v->a[60511] = 3;
	v->a[60512] = sym_file_redirect;
	v->a[60513] = sym_heredoc_redirect;
	v->a[60514] = aux_sym_redirected_statement_repeat1;
	v->a[60515] = actions(1942);
	v->a[60516] = 7;
	v->a[60517] = anon_sym_LT;
	v->a[60518] = anon_sym_GT;
	v->a[60519] = anon_sym_GT_GT;
	small_parse_table_3026(v);
}

void	small_parse_table_3026(t_small_parse_table_array *v)
{
	v->a[60520] = anon_sym_LT_AMP;
	v->a[60521] = anon_sym_GT_AMP;
	v->a[60522] = anon_sym_GT_PIPE;
	v->a[60523] = anon_sym_LT_GT;
	v->a[60524] = 11;
	v->a[60525] = actions(3);
	v->a[60526] = 1;
	v->a[60527] = sym_comment;
	v->a[60528] = actions(692);
	v->a[60529] = 1;
	v->a[60530] = anon_sym_PIPE;
	v->a[60531] = actions(724);
	v->a[60532] = 1;
	v->a[60533] = anon_sym_SEMI_SEMI;
	v->a[60534] = actions(1857);
	v->a[60535] = 1;
	v->a[60536] = aux_sym_heredoc_redirect_token1;
	v->a[60537] = actions(1946);
	v->a[60538] = 1;
	v->a[60539] = sym_file_descriptor;
	small_parse_table_3027(v);
}

void	small_parse_table_3027(t_small_parse_table_array *v)
{
	v->a[60540] = state(697);
	v->a[60541] = 1;
	v->a[60542] = sym_terminator;
	v->a[60543] = actions(696);
	v->a[60544] = 2;
	v->a[60545] = anon_sym_AMP;
	v->a[60546] = anon_sym_SEMI;
	v->a[60547] = actions(700);
	v->a[60548] = 2;
	v->a[60549] = anon_sym_LT_LT;
	v->a[60550] = anon_sym_LT_LT_DASH;
	v->a[60551] = actions(914);
	v->a[60552] = 2;
	v->a[60553] = anon_sym_AMP_AMP;
	v->a[60554] = anon_sym_PIPE_PIPE;
	v->a[60555] = state(1134);
	v->a[60556] = 3;
	v->a[60557] = sym_file_redirect;
	v->a[60558] = sym_heredoc_redirect;
	v->a[60559] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3028(v);
}

void	small_parse_table_3028(t_small_parse_table_array *v)
{
	v->a[60560] = actions(1942);
	v->a[60561] = 7;
	v->a[60562] = anon_sym_LT;
	v->a[60563] = anon_sym_GT;
	v->a[60564] = anon_sym_GT_GT;
	v->a[60565] = anon_sym_LT_AMP;
	v->a[60566] = anon_sym_GT_AMP;
	v->a[60567] = anon_sym_GT_PIPE;
	v->a[60568] = anon_sym_LT_GT;
	v->a[60569] = 5;
	v->a[60570] = actions(3);
	v->a[60571] = 1;
	v->a[60572] = sym_comment;
	v->a[60573] = actions(1835);
	v->a[60574] = 1;
	v->a[60575] = sym_variable_name;
	v->a[60576] = actions(1833);
	v->a[60577] = 2;
	v->a[60578] = aux_sym__simple_variable_name_token1;
	v->a[60579] = aux_sym__multiline_variable_name_token1;
	small_parse_table_3029(v);
}

void	small_parse_table_3029(t_small_parse_table_array *v)
{
	v->a[60580] = actions(363);
	v->a[60581] = 9;
	v->a[60582] = aux_sym_heredoc_redirect_token1;
	v->a[60583] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60584] = anon_sym_DQUOTE;
	v->a[60585] = sym_raw_string;
	v->a[60586] = sym_number;
	v->a[60587] = anon_sym_DOLLAR_LBRACE;
	v->a[60588] = anon_sym_DOLLAR_LPAREN;
	v->a[60589] = anon_sym_BQUOTE;
	v->a[60590] = sym_word;
	v->a[60591] = actions(1831);
	v->a[60592] = 9;
	v->a[60593] = anon_sym_BANG;
	v->a[60594] = anon_sym_DASH;
	v->a[60595] = anon_sym_STAR;
	v->a[60596] = anon_sym_QMARK;
	v->a[60597] = anon_sym_DOLLAR;
	v->a[60598] = anon_sym_POUND;
	v->a[60599] = anon_sym_AT;
	small_parse_table_3030(v);
}

/* EOF small_parse_table_605.c */
