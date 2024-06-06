/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_465.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2325(t_small_parse_table_array *v)
{
	v->a[46500] = sym__concat;
	v->a[46501] = sym_test_operator;
	v->a[46502] = sym__bare_dollar;
	v->a[46503] = sym__brace_start;
	v->a[46504] = aux_sym_heredoc_redirect_token1;
	v->a[46505] = actions(2886);
	v->a[46506] = 33;
	v->a[46507] = anon_sym_PIPE;
	v->a[46508] = anon_sym_RPAREN;
	v->a[46509] = anon_sym_SEMI_SEMI;
	v->a[46510] = anon_sym_PIPE_AMP;
	v->a[46511] = anon_sym_AMP_AMP;
	v->a[46512] = anon_sym_PIPE_PIPE;
	v->a[46513] = anon_sym_LT;
	v->a[46514] = anon_sym_GT;
	v->a[46515] = anon_sym_GT_GT;
	v->a[46516] = anon_sym_AMP_GT;
	v->a[46517] = anon_sym_AMP_GT_GT;
	v->a[46518] = anon_sym_LT_AMP;
	v->a[46519] = anon_sym_GT_AMP;
	small_parse_table_2326(v);
}

void	small_parse_table_2326(t_small_parse_table_array *v)
{
	v->a[46520] = anon_sym_GT_PIPE;
	v->a[46521] = anon_sym_LT_AMP_DASH;
	v->a[46522] = anon_sym_GT_AMP_DASH;
	v->a[46523] = anon_sym_LT_LT;
	v->a[46524] = anon_sym_LT_LT_DASH;
	v->a[46525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46526] = anon_sym_AMP;
	v->a[46527] = aux_sym_concatenation_token1;
	v->a[46528] = anon_sym_DOLLAR;
	v->a[46529] = sym__special_character;
	v->a[46530] = anon_sym_DQUOTE;
	v->a[46531] = sym_raw_string;
	v->a[46532] = aux_sym_number_token1;
	v->a[46533] = aux_sym_number_token2;
	v->a[46534] = anon_sym_DOLLAR_LBRACE;
	v->a[46535] = anon_sym_DOLLAR_LPAREN;
	v->a[46536] = anon_sym_BQUOTE;
	v->a[46537] = anon_sym_DOLLAR_BQUOTE;
	v->a[46538] = sym_word;
	v->a[46539] = anon_sym_SEMI;
	small_parse_table_2327(v);
}

void	small_parse_table_2327(t_small_parse_table_array *v)
{
	v->a[46540] = 3;
	v->a[46541] = actions(3);
	v->a[46542] = 1;
	v->a[46543] = sym_comment;
	v->a[46544] = actions(3034);
	v->a[46545] = 6;
	v->a[46546] = sym_file_descriptor;
	v->a[46547] = sym__concat;
	v->a[46548] = sym_test_operator;
	v->a[46549] = sym__brace_start;
	v->a[46550] = ts_builtin_sym_end;
	v->a[46551] = aux_sym_heredoc_redirect_token1;
	v->a[46552] = actions(3032);
	v->a[46553] = 33;
	v->a[46554] = anon_sym_PIPE;
	v->a[46555] = anon_sym_SEMI_SEMI;
	v->a[46556] = anon_sym_PIPE_AMP;
	v->a[46557] = anon_sym_AMP_AMP;
	v->a[46558] = anon_sym_PIPE_PIPE;
	v->a[46559] = anon_sym_LT;
	small_parse_table_2328(v);
}

void	small_parse_table_2328(t_small_parse_table_array *v)
{
	v->a[46560] = anon_sym_GT;
	v->a[46561] = anon_sym_GT_GT;
	v->a[46562] = anon_sym_AMP_GT;
	v->a[46563] = anon_sym_AMP_GT_GT;
	v->a[46564] = anon_sym_LT_AMP;
	v->a[46565] = anon_sym_GT_AMP;
	v->a[46566] = anon_sym_GT_PIPE;
	v->a[46567] = anon_sym_LT_AMP_DASH;
	v->a[46568] = anon_sym_GT_AMP_DASH;
	v->a[46569] = anon_sym_LT_LT;
	v->a[46570] = anon_sym_LT_LT_DASH;
	v->a[46571] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46572] = anon_sym_AMP;
	v->a[46573] = aux_sym_concatenation_token1;
	v->a[46574] = anon_sym_DOLLAR;
	v->a[46575] = sym__special_character;
	v->a[46576] = anon_sym_DQUOTE;
	v->a[46577] = sym_raw_string;
	v->a[46578] = aux_sym_number_token1;
	v->a[46579] = aux_sym_number_token2;
	small_parse_table_2329(v);
}

void	small_parse_table_2329(t_small_parse_table_array *v)
{
	v->a[46580] = anon_sym_DOLLAR_LBRACE;
	v->a[46581] = anon_sym_DOLLAR_LPAREN;
	v->a[46582] = anon_sym_BQUOTE;
	v->a[46583] = anon_sym_DOLLAR_BQUOTE;
	v->a[46584] = aux_sym__simple_variable_name_token1;
	v->a[46585] = sym_word;
	v->a[46586] = anon_sym_SEMI;
	v->a[46587] = 3;
	v->a[46588] = actions(3);
	v->a[46589] = 1;
	v->a[46590] = sym_comment;
	v->a[46591] = actions(2967);
	v->a[46592] = 6;
	v->a[46593] = sym_file_descriptor;
	v->a[46594] = sym__concat;
	v->a[46595] = sym_test_operator;
	v->a[46596] = sym__brace_start;
	v->a[46597] = ts_builtin_sym_end;
	v->a[46598] = aux_sym_heredoc_redirect_token1;
	v->a[46599] = actions(2965);
	small_parse_table_2330(v);
}

/* EOF small_parse_table_465.c */
