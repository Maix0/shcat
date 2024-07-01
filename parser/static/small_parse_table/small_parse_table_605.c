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
	v->a[60500] = anon_sym_SEMI;
	v->a[60501] = 15;
	v->a[60502] = actions(3);
	v->a[60503] = 1;
	v->a[60504] = sym_comment;
	v->a[60505] = actions(1634);
	v->a[60506] = 1;
	v->a[60507] = anon_sym_LPAREN;
	v->a[60508] = actions(1638);
	v->a[60509] = 1;
	v->a[60510] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60511] = actions(1640);
	v->a[60512] = 1;
	v->a[60513] = anon_sym_DOLLAR;
	v->a[60514] = actions(1642);
	v->a[60515] = 1;
	v->a[60516] = anon_sym_DQUOTE;
	v->a[60517] = actions(1644);
	v->a[60518] = 1;
	v->a[60519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3026(v);
}

void	small_parse_table_3026(t_small_parse_table_array *v)
{
	v->a[60520] = actions(1646);
	v->a[60521] = 1;
	v->a[60522] = anon_sym_DOLLAR_LPAREN;
	v->a[60523] = actions(1648);
	v->a[60524] = 1;
	v->a[60525] = anon_sym_BQUOTE;
	v->a[60526] = actions(1650);
	v->a[60527] = 1;
	v->a[60528] = sym_extglob_pattern;
	v->a[60529] = state(1139);
	v->a[60530] = 1;
	v->a[60531] = aux_sym_case_statement_repeat1;
	v->a[60532] = state(1713);
	v->a[60533] = 1;
	v->a[60534] = sym_case_item;
	v->a[60535] = state(2051);
	v->a[60536] = 1;
	v->a[60537] = sym__case_item_last;
	v->a[60538] = state(1871);
	v->a[60539] = 2;
	small_parse_table_3027(v);
}

void	small_parse_table_3027(t_small_parse_table_array *v)
{
	v->a[60540] = sym_concatenation;
	v->a[60541] = sym__extglob_blob;
	v->a[60542] = actions(1630);
	v->a[60543] = 3;
	v->a[60544] = sym_raw_string;
	v->a[60545] = sym_number;
	v->a[60546] = sym_word;
	v->a[60547] = state(1804);
	v->a[60548] = 5;
	v->a[60549] = sym_arithmetic_expansion;
	v->a[60550] = sym_string;
	v->a[60551] = sym_simple_expansion;
	v->a[60552] = sym_expansion;
	v->a[60553] = sym_command_substitution;
	v->a[60554] = 3;
	v->a[60555] = actions(3);
	v->a[60556] = 1;
	v->a[60557] = sym_comment;
	v->a[60558] = actions(1469);
	v->a[60559] = 3;
	small_parse_table_3028(v);
}

void	small_parse_table_3028(t_small_parse_table_array *v)
{
	v->a[60560] = sym_file_descriptor;
	v->a[60561] = ts_builtin_sym_end;
	v->a[60562] = aux_sym_heredoc_redirect_token1;
	v->a[60563] = actions(1467);
	v->a[60564] = 17;
	v->a[60565] = anon_sym_PIPE;
	v->a[60566] = anon_sym_RPAREN;
	v->a[60567] = anon_sym_SEMI_SEMI;
	v->a[60568] = anon_sym_AMP_AMP;
	v->a[60569] = anon_sym_PIPE_PIPE;
	v->a[60570] = anon_sym_LT;
	v->a[60571] = anon_sym_GT;
	v->a[60572] = anon_sym_GT_GT;
	v->a[60573] = anon_sym_LT_AMP;
	v->a[60574] = anon_sym_GT_AMP;
	v->a[60575] = anon_sym_GT_PIPE;
	v->a[60576] = anon_sym_LT_GT;
	v->a[60577] = anon_sym_LT_LT;
	v->a[60578] = anon_sym_LT_LT_DASH;
	v->a[60579] = anon_sym_AMP;
	small_parse_table_3029(v);
}

void	small_parse_table_3029(t_small_parse_table_array *v)
{
	v->a[60580] = anon_sym_BQUOTE;
	v->a[60581] = anon_sym_SEMI;
	v->a[60582] = 3;
	v->a[60583] = actions(3);
	v->a[60584] = 1;
	v->a[60585] = sym_comment;
	v->a[60586] = actions(1469);
	v->a[60587] = 3;
	v->a[60588] = sym_file_descriptor;
	v->a[60589] = ts_builtin_sym_end;
	v->a[60590] = aux_sym_heredoc_redirect_token1;
	v->a[60591] = actions(1467);
	v->a[60592] = 17;
	v->a[60593] = anon_sym_PIPE;
	v->a[60594] = anon_sym_RPAREN;
	v->a[60595] = anon_sym_SEMI_SEMI;
	v->a[60596] = anon_sym_AMP_AMP;
	v->a[60597] = anon_sym_PIPE_PIPE;
	v->a[60598] = anon_sym_LT;
	v->a[60599] = anon_sym_GT;
	small_parse_table_3030(v);
}

/* EOF small_parse_table_605.c */
