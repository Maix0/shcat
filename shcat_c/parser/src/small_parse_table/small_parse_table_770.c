/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_770.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3850(t_small_parse_table_array *v)
{
	v->a[77000] = anon_sym_LT_LT_DASH;
	v->a[77001] = anon_sym_LT_LT_LT;
	v->a[77002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77003] = anon_sym_DOLLAR_LBRACK;
	v->a[77004] = anon_sym_DOLLAR;
	v->a[77005] = sym__special_character;
	v->a[77006] = anon_sym_DQUOTE;
	v->a[77007] = sym_raw_string;
	v->a[77008] = sym_ansi_c_string;
	v->a[77009] = aux_sym_number_token1;
	v->a[77010] = aux_sym_number_token2;
	v->a[77011] = anon_sym_DOLLAR_LBRACE;
	v->a[77012] = anon_sym_DOLLAR_LPAREN;
	v->a[77013] = anon_sym_BQUOTE;
	v->a[77014] = anon_sym_DOLLAR_BQUOTE;
	v->a[77015] = anon_sym_LT_LPAREN;
	v->a[77016] = anon_sym_GT_LPAREN;
	v->a[77017] = sym_word;
	v->a[77018] = 3;
	v->a[77019] = actions(3);
	small_parse_table_3851(v);
}

void	small_parse_table_3851(t_small_parse_table_array *v)
{
	v->a[77020] = 1;
	v->a[77021] = sym_comment;
	v->a[77022] = actions(4372);
	v->a[77023] = 5;
	v->a[77024] = sym_file_descriptor;
	v->a[77025] = sym_variable_name;
	v->a[77026] = sym_test_operator;
	v->a[77027] = sym__brace_start;
	v->a[77028] = aux_sym_heredoc_redirect_token1;
	v->a[77029] = actions(4370);
	v->a[77030] = 40;
	v->a[77031] = anon_sym_LPAREN_LPAREN;
	v->a[77032] = anon_sym_SEMI;
	v->a[77033] = anon_sym_PIPE_PIPE;
	v->a[77034] = anon_sym_AMP_AMP;
	v->a[77035] = anon_sym_PIPE;
	v->a[77036] = anon_sym_AMP;
	v->a[77037] = anon_sym_LT;
	v->a[77038] = anon_sym_GT;
	v->a[77039] = anon_sym_LT_LT;
	small_parse_table_3852(v);
}

void	small_parse_table_3852(t_small_parse_table_array *v)
{
	v->a[77040] = anon_sym_GT_GT;
	v->a[77041] = anon_sym_esac;
	v->a[77042] = anon_sym_SEMI_SEMI;
	v->a[77043] = anon_sym_SEMI_AMP;
	v->a[77044] = anon_sym_SEMI_SEMI_AMP;
	v->a[77045] = anon_sym_PIPE_AMP;
	v->a[77046] = anon_sym_AMP_GT;
	v->a[77047] = anon_sym_AMP_GT_GT;
	v->a[77048] = anon_sym_LT_AMP;
	v->a[77049] = anon_sym_GT_AMP;
	v->a[77050] = anon_sym_GT_PIPE;
	v->a[77051] = anon_sym_LT_AMP_DASH;
	v->a[77052] = anon_sym_GT_AMP_DASH;
	v->a[77053] = anon_sym_LT_LT_DASH;
	v->a[77054] = anon_sym_LT_LT_LT;
	v->a[77055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77056] = anon_sym_DOLLAR_LBRACK;
	v->a[77057] = anon_sym_DOLLAR;
	v->a[77058] = sym__special_character;
	v->a[77059] = anon_sym_DQUOTE;
	small_parse_table_3853(v);
}

void	small_parse_table_3853(t_small_parse_table_array *v)
{
	v->a[77060] = sym_raw_string;
	v->a[77061] = sym_ansi_c_string;
	v->a[77062] = aux_sym_number_token1;
	v->a[77063] = aux_sym_number_token2;
	v->a[77064] = anon_sym_DOLLAR_LBRACE;
	v->a[77065] = anon_sym_DOLLAR_LPAREN;
	v->a[77066] = anon_sym_BQUOTE;
	v->a[77067] = anon_sym_DOLLAR_BQUOTE;
	v->a[77068] = anon_sym_LT_LPAREN;
	v->a[77069] = anon_sym_GT_LPAREN;
	v->a[77070] = sym_word;
	v->a[77071] = 6;
	v->a[77072] = actions(3);
	v->a[77073] = 1;
	v->a[77074] = sym_comment;
	v->a[77075] = actions(5758);
	v->a[77076] = 1;
	v->a[77077] = aux_sym_concatenation_token1;
	v->a[77078] = actions(5837);
	v->a[77079] = 1;
	small_parse_table_3854(v);
}

void	small_parse_table_3854(t_small_parse_table_array *v)
{
	v->a[77080] = sym__concat;
	v->a[77081] = state(1659);
	v->a[77082] = 1;
	v->a[77083] = aux_sym_concatenation_repeat1;
	v->a[77084] = actions(1267);
	v->a[77085] = 4;
	v->a[77086] = sym_file_descriptor;
	v->a[77087] = sym_test_operator;
	v->a[77088] = sym__brace_start;
	v->a[77089] = aux_sym_heredoc_redirect_token1;
	v->a[77090] = actions(1265);
	v->a[77091] = 38;
	v->a[77092] = anon_sym_LPAREN_LPAREN;
	v->a[77093] = anon_sym_SEMI;
	v->a[77094] = anon_sym_PIPE_PIPE;
	v->a[77095] = anon_sym_AMP_AMP;
	v->a[77096] = anon_sym_PIPE;
	v->a[77097] = anon_sym_AMP;
	v->a[77098] = anon_sym_LT;
	v->a[77099] = anon_sym_GT;
	small_parse_table_3855(v);
}

/* EOF small_parse_table_770.c */
