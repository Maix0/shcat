/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_315.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1575(t_small_parse_table_array *v)
{
	v->a[31500] = actions(1227);
	v->a[31501] = 33;
	v->a[31502] = anon_sym_LPAREN_LPAREN;
	v->a[31503] = anon_sym_PIPE_PIPE;
	v->a[31504] = anon_sym_AMP_AMP;
	v->a[31505] = anon_sym_PIPE;
	v->a[31506] = anon_sym_LT;
	v->a[31507] = anon_sym_GT;
	v->a[31508] = anon_sym_LT_LT;
	v->a[31509] = anon_sym_GT_GT;
	v->a[31510] = anon_sym_PIPE_AMP;
	v->a[31511] = anon_sym_RBRACK;
	v->a[31512] = anon_sym_AMP_GT;
	v->a[31513] = anon_sym_AMP_GT_GT;
	v->a[31514] = anon_sym_LT_AMP;
	v->a[31515] = anon_sym_GT_AMP;
	v->a[31516] = anon_sym_GT_PIPE;
	v->a[31517] = anon_sym_LT_AMP_DASH;
	v->a[31518] = anon_sym_GT_AMP_DASH;
	v->a[31519] = anon_sym_LT_LT_DASH;
	small_parse_table_1576(v);
}

void	small_parse_table_1576(t_small_parse_table_array *v)
{
	v->a[31520] = anon_sym_LT_LT_LT;
	v->a[31521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31522] = anon_sym_DOLLAR_LBRACK;
	v->a[31523] = sym__special_character;
	v->a[31524] = sym_raw_string;
	v->a[31525] = sym_ansi_c_string;
	v->a[31526] = aux_sym_number_token1;
	v->a[31527] = aux_sym_number_token2;
	v->a[31528] = anon_sym_DOLLAR_LBRACE;
	v->a[31529] = anon_sym_DOLLAR_LPAREN;
	v->a[31530] = anon_sym_BQUOTE;
	v->a[31531] = anon_sym_DOLLAR_BQUOTE;
	v->a[31532] = anon_sym_LT_LPAREN;
	v->a[31533] = anon_sym_GT_LPAREN;
	v->a[31534] = sym_word;
	v->a[31535] = 3;
	v->a[31536] = actions(3);
	v->a[31537] = 1;
	v->a[31538] = sym_comment;
	v->a[31539] = actions(1318);
	small_parse_table_1577(v);
}

void	small_parse_table_1577(t_small_parse_table_array *v)
{
	v->a[31540] = 6;
	v->a[31541] = sym_file_descriptor;
	v->a[31542] = sym__concat;
	v->a[31543] = sym_test_operator;
	v->a[31544] = sym__bare_dollar;
	v->a[31545] = sym__brace_start;
	v->a[31546] = aux_sym_heredoc_redirect_token1;
	v->a[31547] = actions(1316);
	v->a[31548] = 44;
	v->a[31549] = anon_sym_LPAREN_LPAREN;
	v->a[31550] = anon_sym_SEMI;
	v->a[31551] = anon_sym_PIPE_PIPE;
	v->a[31552] = anon_sym_AMP_AMP;
	v->a[31553] = anon_sym_PIPE;
	v->a[31554] = anon_sym_AMP;
	v->a[31555] = anon_sym_EQ_EQ;
	v->a[31556] = anon_sym_LT;
	v->a[31557] = anon_sym_GT;
	v->a[31558] = anon_sym_LT_LT;
	v->a[31559] = anon_sym_GT_GT;
	small_parse_table_1578(v);
}

void	small_parse_table_1578(t_small_parse_table_array *v)
{
	v->a[31560] = anon_sym_LPAREN;
	v->a[31561] = anon_sym_esac;
	v->a[31562] = anon_sym_SEMI_SEMI;
	v->a[31563] = anon_sym_SEMI_AMP;
	v->a[31564] = anon_sym_SEMI_SEMI_AMP;
	v->a[31565] = anon_sym_PIPE_AMP;
	v->a[31566] = anon_sym_EQ_TILDE;
	v->a[31567] = anon_sym_AMP_GT;
	v->a[31568] = anon_sym_AMP_GT_GT;
	v->a[31569] = anon_sym_LT_AMP;
	v->a[31570] = anon_sym_GT_AMP;
	v->a[31571] = anon_sym_GT_PIPE;
	v->a[31572] = anon_sym_LT_AMP_DASH;
	v->a[31573] = anon_sym_GT_AMP_DASH;
	v->a[31574] = anon_sym_LT_LT_DASH;
	v->a[31575] = anon_sym_LT_LT_LT;
	v->a[31576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31577] = anon_sym_DOLLAR_LBRACK;
	v->a[31578] = aux_sym_concatenation_token1;
	v->a[31579] = anon_sym_DOLLAR;
	small_parse_table_1579(v);
}

void	small_parse_table_1579(t_small_parse_table_array *v)
{
	v->a[31580] = sym__special_character;
	v->a[31581] = anon_sym_DQUOTE;
	v->a[31582] = sym_raw_string;
	v->a[31583] = sym_ansi_c_string;
	v->a[31584] = aux_sym_number_token1;
	v->a[31585] = aux_sym_number_token2;
	v->a[31586] = anon_sym_DOLLAR_LBRACE;
	v->a[31587] = anon_sym_DOLLAR_LPAREN;
	v->a[31588] = anon_sym_BQUOTE;
	v->a[31589] = anon_sym_DOLLAR_BQUOTE;
	v->a[31590] = anon_sym_LT_LPAREN;
	v->a[31591] = anon_sym_GT_LPAREN;
	v->a[31592] = sym_word;
	v->a[31593] = 6;
	v->a[31594] = actions(3);
	v->a[31595] = 1;
	v->a[31596] = sym_comment;
	v->a[31597] = actions(4374);
	v->a[31598] = 1;
	v->a[31599] = aux_sym_concatenation_token1;
	small_parse_table_1580(v);
}

/* EOF small_parse_table_315.c */