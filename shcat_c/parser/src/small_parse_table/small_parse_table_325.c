/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_325.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1625(t_small_parse_table_array *v)
{
	v->a[32500] = anon_sym_AMP_AMP;
	v->a[32501] = anon_sym_PIPE;
	v->a[32502] = anon_sym_AMP;
	v->a[32503] = anon_sym_EQ_EQ;
	v->a[32504] = anon_sym_LT;
	v->a[32505] = anon_sym_GT;
	v->a[32506] = anon_sym_LT_LT;
	v->a[32507] = anon_sym_GT_GT;
	v->a[32508] = anon_sym_esac;
	v->a[32509] = anon_sym_SEMI_SEMI;
	v->a[32510] = anon_sym_SEMI_AMP;
	v->a[32511] = anon_sym_SEMI_SEMI_AMP;
	v->a[32512] = anon_sym_PIPE_AMP;
	v->a[32513] = anon_sym_EQ_TILDE;
	v->a[32514] = anon_sym_AMP_GT;
	v->a[32515] = anon_sym_AMP_GT_GT;
	v->a[32516] = anon_sym_LT_AMP;
	v->a[32517] = anon_sym_GT_AMP;
	v->a[32518] = anon_sym_GT_PIPE;
	v->a[32519] = anon_sym_LT_AMP_DASH;
	small_parse_table_1626(v);
}

void	small_parse_table_1626(t_small_parse_table_array *v)
{
	v->a[32520] = anon_sym_GT_AMP_DASH;
	v->a[32521] = anon_sym_LT_LT_DASH;
	v->a[32522] = anon_sym_LT_LT_LT;
	v->a[32523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32524] = anon_sym_DOLLAR_LBRACK;
	v->a[32525] = aux_sym_concatenation_token1;
	v->a[32526] = anon_sym_DOLLAR;
	v->a[32527] = sym__special_character;
	v->a[32528] = anon_sym_DQUOTE;
	v->a[32529] = sym_raw_string;
	v->a[32530] = sym_ansi_c_string;
	v->a[32531] = aux_sym_number_token1;
	v->a[32532] = aux_sym_number_token2;
	v->a[32533] = anon_sym_DOLLAR_LBRACE;
	v->a[32534] = anon_sym_DOLLAR_LPAREN;
	v->a[32535] = anon_sym_BQUOTE;
	v->a[32536] = anon_sym_DOLLAR_BQUOTE;
	v->a[32537] = anon_sym_LT_LPAREN;
	v->a[32538] = anon_sym_GT_LPAREN;
	v->a[32539] = sym_word;
	small_parse_table_1627(v);
}

void	small_parse_table_1627(t_small_parse_table_array *v)
{
	v->a[32540] = 8;
	v->a[32541] = actions(3);
	v->a[32542] = 1;
	v->a[32543] = sym_comment;
	v->a[32544] = actions(2267);
	v->a[32545] = 1;
	v->a[32546] = anon_sym_DQUOTE;
	v->a[32547] = actions(3829);
	v->a[32548] = 1;
	v->a[32549] = sym_variable_name;
	v->a[32550] = state(1595);
	v->a[32551] = 1;
	v->a[32552] = sym_string;
	v->a[32553] = actions(3827);
	v->a[32554] = 2;
	v->a[32555] = aux_sym__simple_variable_name_token1;
	v->a[32556] = aux_sym__multiline_variable_name_token1;
	v->a[32557] = actions(1241);
	v->a[32558] = 3;
	v->a[32559] = sym_file_descriptor;
	small_parse_table_1628(v);
}

void	small_parse_table_1628(t_small_parse_table_array *v)
{
	v->a[32560] = sym_test_operator;
	v->a[32561] = sym__brace_start;
	v->a[32562] = actions(3825);
	v->a[32563] = 9;
	v->a[32564] = anon_sym_DASH;
	v->a[32565] = anon_sym_STAR;
	v->a[32566] = anon_sym_BANG;
	v->a[32567] = anon_sym_QMARK;
	v->a[32568] = anon_sym_DOLLAR;
	v->a[32569] = anon_sym_POUND;
	v->a[32570] = anon_sym_AT2;
	v->a[32571] = anon_sym_0;
	v->a[32572] = anon_sym__;
	v->a[32573] = actions(1239);
	v->a[32574] = 32;
	v->a[32575] = anon_sym_LPAREN_LPAREN;
	v->a[32576] = anon_sym_PIPE_PIPE;
	v->a[32577] = anon_sym_AMP_AMP;
	v->a[32578] = anon_sym_PIPE;
	v->a[32579] = anon_sym_LT;
	small_parse_table_1629(v);
}

void	small_parse_table_1629(t_small_parse_table_array *v)
{
	v->a[32580] = anon_sym_GT;
	v->a[32581] = anon_sym_LT_LT;
	v->a[32582] = anon_sym_GT_GT;
	v->a[32583] = anon_sym_PIPE_AMP;
	v->a[32584] = anon_sym_AMP_GT;
	v->a[32585] = anon_sym_AMP_GT_GT;
	v->a[32586] = anon_sym_LT_AMP;
	v->a[32587] = anon_sym_GT_AMP;
	v->a[32588] = anon_sym_GT_PIPE;
	v->a[32589] = anon_sym_LT_AMP_DASH;
	v->a[32590] = anon_sym_GT_AMP_DASH;
	v->a[32591] = anon_sym_LT_LT_DASH;
	v->a[32592] = aux_sym_heredoc_redirect_token1;
	v->a[32593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32594] = anon_sym_DOLLAR_LBRACK;
	v->a[32595] = sym__special_character;
	v->a[32596] = sym_raw_string;
	v->a[32597] = sym_ansi_c_string;
	v->a[32598] = aux_sym_number_token1;
	v->a[32599] = aux_sym_number_token2;
	small_parse_table_1630(v);
}

/* EOF small_parse_table_325.c */
