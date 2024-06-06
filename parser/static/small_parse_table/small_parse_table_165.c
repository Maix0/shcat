/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_165.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_825(t_small_parse_table_array *v)
{
	v->a[16500] = anon_sym_PIPE_AMP;
	v->a[16501] = anon_sym_AMP_AMP;
	v->a[16502] = anon_sym_PIPE_PIPE;
	v->a[16503] = anon_sym_LT;
	v->a[16504] = anon_sym_GT;
	v->a[16505] = anon_sym_GT_GT;
	v->a[16506] = anon_sym_AMP_GT;
	v->a[16507] = anon_sym_AMP_GT_GT;
	v->a[16508] = anon_sym_LT_AMP;
	v->a[16509] = anon_sym_GT_AMP;
	v->a[16510] = anon_sym_GT_PIPE;
	v->a[16511] = anon_sym_LT_AMP_DASH;
	v->a[16512] = anon_sym_GT_AMP_DASH;
	v->a[16513] = anon_sym_LT_LT;
	v->a[16514] = anon_sym_LT_LT_DASH;
	v->a[16515] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16516] = anon_sym_AMP;
	v->a[16517] = anon_sym_DOLLAR;
	v->a[16518] = sym__special_character;
	v->a[16519] = anon_sym_DQUOTE;
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = sym_raw_string;
	v->a[16521] = aux_sym_number_token1;
	v->a[16522] = aux_sym_number_token2;
	v->a[16523] = anon_sym_DOLLAR_LBRACE;
	v->a[16524] = anon_sym_DOLLAR_LPAREN;
	v->a[16525] = anon_sym_BQUOTE;
	v->a[16526] = anon_sym_DOLLAR_BQUOTE;
	v->a[16527] = aux_sym__simple_variable_name_token1;
	v->a[16528] = sym_word;
	v->a[16529] = anon_sym_SEMI;
	v->a[16530] = 6;
	v->a[16531] = actions(3);
	v->a[16532] = 1;
	v->a[16533] = sym_comment;
	v->a[16534] = actions(2666);
	v->a[16535] = 1;
	v->a[16536] = aux_sym_concatenation_token1;
	v->a[16537] = actions(2668);
	v->a[16538] = 1;
	v->a[16539] = sym__concat;
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = state(489);
	v->a[16541] = 1;
	v->a[16542] = aux_sym_concatenation_repeat1;
	v->a[16543] = actions(2664);
	v->a[16544] = 5;
	v->a[16545] = sym_file_descriptor;
	v->a[16546] = sym_variable_name;
	v->a[16547] = sym_test_operator;
	v->a[16548] = sym__brace_start;
	v->a[16549] = aux_sym_heredoc_redirect_token1;
	v->a[16550] = actions(2662);
	v->a[16551] = 35;
	v->a[16552] = anon_sym_esac;
	v->a[16553] = anon_sym_PIPE;
	v->a[16554] = anon_sym_SEMI_SEMI;
	v->a[16555] = anon_sym_SEMI_AMP;
	v->a[16556] = anon_sym_SEMI_SEMI_AMP;
	v->a[16557] = anon_sym_PIPE_AMP;
	v->a[16558] = anon_sym_AMP_AMP;
	v->a[16559] = anon_sym_PIPE_PIPE;
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = anon_sym_LT;
	v->a[16561] = anon_sym_GT;
	v->a[16562] = anon_sym_GT_GT;
	v->a[16563] = anon_sym_AMP_GT;
	v->a[16564] = anon_sym_AMP_GT_GT;
	v->a[16565] = anon_sym_LT_AMP;
	v->a[16566] = anon_sym_GT_AMP;
	v->a[16567] = anon_sym_GT_PIPE;
	v->a[16568] = anon_sym_LT_AMP_DASH;
	v->a[16569] = anon_sym_GT_AMP_DASH;
	v->a[16570] = anon_sym_LT_LT;
	v->a[16571] = anon_sym_LT_LT_DASH;
	v->a[16572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16573] = anon_sym_AMP;
	v->a[16574] = anon_sym_DOLLAR;
	v->a[16575] = sym__special_character;
	v->a[16576] = anon_sym_DQUOTE;
	v->a[16577] = sym_raw_string;
	v->a[16578] = aux_sym_number_token1;
	v->a[16579] = aux_sym_number_token2;
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = anon_sym_DOLLAR_LBRACE;
	v->a[16581] = anon_sym_DOLLAR_LPAREN;
	v->a[16582] = anon_sym_BQUOTE;
	v->a[16583] = anon_sym_DOLLAR_BQUOTE;
	v->a[16584] = aux_sym__simple_variable_name_token1;
	v->a[16585] = sym_word;
	v->a[16586] = anon_sym_SEMI;
	v->a[16587] = 20;
	v->a[16588] = actions(3);
	v->a[16589] = 1;
	v->a[16590] = sym_comment;
	v->a[16591] = actions(1737);
	v->a[16592] = 1;
	v->a[16593] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16594] = actions(1739);
	v->a[16595] = 1;
	v->a[16596] = anon_sym_DOLLAR;
	v->a[16597] = actions(1743);
	v->a[16598] = 1;
	v->a[16599] = anon_sym_DQUOTE;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
