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
	v->a[16500] = anon_sym_LT_LPAREN;
	v->a[16501] = anon_sym_GT_LPAREN;
	v->a[16502] = state(678);
	v->a[16503] = 2;
	v->a[16504] = sym_concatenation;
	v->a[16505] = aux_sym_for_statement_repeat1;
	v->a[16506] = actions(2074);
	v->a[16507] = 3;
	v->a[16508] = sym_file_descriptor;
	v->a[16509] = ts_builtin_sym_end;
	v->a[16510] = aux_sym_heredoc_redirect_token1;
	v->a[16511] = actions(3471);
	v->a[16512] = 3;
	v->a[16513] = sym_raw_string;
	v->a[16514] = sym_ansi_c_string;
	v->a[16515] = sym_word;
	v->a[16516] = state(1630);
	v->a[16517] = 9;
	v->a[16518] = sym_arithmetic_expansion;
	v->a[16519] = sym_brace_expression;
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = sym_string;
	v->a[16521] = sym_translated_string;
	v->a[16522] = sym_number;
	v->a[16523] = sym_simple_expansion;
	v->a[16524] = sym_expansion;
	v->a[16525] = sym_command_substitution;
	v->a[16526] = sym_process_substitution;
	v->a[16527] = actions(2072);
	v->a[16528] = 20;
	v->a[16529] = anon_sym_SEMI;
	v->a[16530] = anon_sym_PIPE_PIPE;
	v->a[16531] = anon_sym_AMP_AMP;
	v->a[16532] = anon_sym_PIPE;
	v->a[16533] = anon_sym_AMP;
	v->a[16534] = anon_sym_LT;
	v->a[16535] = anon_sym_GT;
	v->a[16536] = anon_sym_LT_LT;
	v->a[16537] = anon_sym_GT_GT;
	v->a[16538] = anon_sym_SEMI_SEMI;
	v->a[16539] = anon_sym_PIPE_AMP;
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = anon_sym_AMP_GT;
	v->a[16541] = anon_sym_AMP_GT_GT;
	v->a[16542] = anon_sym_LT_AMP;
	v->a[16543] = anon_sym_GT_AMP;
	v->a[16544] = anon_sym_GT_PIPE;
	v->a[16545] = anon_sym_LT_AMP_DASH;
	v->a[16546] = anon_sym_GT_AMP_DASH;
	v->a[16547] = anon_sym_LT_LT_DASH;
	v->a[16548] = anon_sym_LT_LT_LT;
	v->a[16549] = 27;
	v->a[16550] = actions(3);
	v->a[16551] = 1;
	v->a[16552] = sym_comment;
	v->a[16553] = actions(1491);
	v->a[16554] = 1;
	v->a[16555] = aux_sym_heredoc_redirect_token1;
	v->a[16556] = actions(1871);
	v->a[16557] = 1;
	v->a[16558] = anon_sym_DOLLAR_LBRACK;
	v->a[16559] = actions(1874);
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = 1;
	v->a[16561] = anon_sym_DOLLAR;
	v->a[16562] = actions(1880);
	v->a[16563] = 1;
	v->a[16564] = anon_sym_DQUOTE;
	v->a[16565] = actions(1883);
	v->a[16566] = 1;
	v->a[16567] = aux_sym_number_token1;
	v->a[16568] = actions(1886);
	v->a[16569] = 1;
	v->a[16570] = aux_sym_number_token2;
	v->a[16571] = actions(1889);
	v->a[16572] = 1;
	v->a[16573] = anon_sym_DOLLAR_LBRACE;
	v->a[16574] = actions(1892);
	v->a[16575] = 1;
	v->a[16576] = anon_sym_DOLLAR_LPAREN;
	v->a[16577] = actions(1895);
	v->a[16578] = 1;
	v->a[16579] = anon_sym_BQUOTE;
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = actions(1898);
	v->a[16581] = 1;
	v->a[16582] = anon_sym_DOLLAR_BQUOTE;
	v->a[16583] = actions(1910);
	v->a[16584] = 1;
	v->a[16585] = sym__bare_dollar;
	v->a[16586] = actions(1913);
	v->a[16587] = 1;
	v->a[16588] = sym__brace_start;
	v->a[16589] = actions(3505);
	v->a[16590] = 1;
	v->a[16591] = anon_sym_LT_LT_LT;
	v->a[16592] = actions(3508);
	v->a[16593] = 1;
	v->a[16594] = sym__special_character;
	v->a[16595] = actions(3511);
	v->a[16596] = 1;
	v->a[16597] = sym_file_descriptor;
	v->a[16598] = actions(3514);
	v->a[16599] = 1;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
