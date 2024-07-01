/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_721.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3605(t_small_parse_table_array *v)
{
	v->a[72100] = sym__concat;
	v->a[72101] = actions(764);
	v->a[72102] = 14;
	v->a[72103] = anon_sym_SEMI_SEMI;
	v->a[72104] = aux_sym_heredoc_redirect_token1;
	v->a[72105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72106] = anon_sym_AMP;
	v->a[72107] = aux_sym_concatenation_token1;
	v->a[72108] = anon_sym_DOLLAR;
	v->a[72109] = anon_sym_DQUOTE;
	v->a[72110] = sym_raw_string;
	v->a[72111] = sym_number;
	v->a[72112] = anon_sym_DOLLAR_LBRACE;
	v->a[72113] = anon_sym_DOLLAR_LPAREN;
	v->a[72114] = anon_sym_BQUOTE;
	v->a[72115] = sym_word;
	v->a[72116] = anon_sym_SEMI;
	v->a[72117] = 8;
	v->a[72118] = actions(664);
	v->a[72119] = 1;
	small_parse_table_3606(v);
}

void	small_parse_table_3606(t_small_parse_table_array *v)
{
	v->a[72120] = sym_comment;
	v->a[72121] = actions(744);
	v->a[72122] = 1;
	v->a[72123] = anon_sym_LT_LT;
	v->a[72124] = actions(1867);
	v->a[72125] = 1;
	v->a[72126] = sym_file_descriptor;
	v->a[72127] = actions(2786);
	v->a[72128] = 1;
	v->a[72129] = anon_sym_LT_LT_DASH;
	v->a[72130] = actions(1863);
	v->a[72131] = 2;
	v->a[72132] = anon_sym_LT;
	v->a[72133] = anon_sym_GT;
	v->a[72134] = actions(2836);
	v->a[72135] = 2;
	v->a[72136] = anon_sym_AMP_AMP;
	v->a[72137] = anon_sym_PIPE_PIPE;
	v->a[72138] = state(1059);
	v->a[72139] = 3;
	small_parse_table_3607(v);
}

void	small_parse_table_3607(t_small_parse_table_array *v)
{
	v->a[72140] = sym_file_redirect;
	v->a[72141] = sym_heredoc_redirect;
	v->a[72142] = aux_sym_redirected_statement_repeat1;
	v->a[72143] = actions(2838);
	v->a[72144] = 5;
	v->a[72145] = anon_sym_GT_GT;
	v->a[72146] = anon_sym_LT_AMP;
	v->a[72147] = anon_sym_GT_AMP;
	v->a[72148] = anon_sym_GT_PIPE;
	v->a[72149] = anon_sym_LT_GT;
	v->a[72150] = 13;
	v->a[72151] = actions(3);
	v->a[72152] = 1;
	v->a[72153] = sym_comment;
	v->a[72154] = actions(1640);
	v->a[72155] = 1;
	v->a[72156] = anon_sym_DOLLAR;
	v->a[72157] = actions(1642);
	v->a[72158] = 1;
	v->a[72159] = anon_sym_DQUOTE;
	small_parse_table_3608(v);
}

void	small_parse_table_3608(t_small_parse_table_array *v)
{
	v->a[72160] = actions(1644);
	v->a[72161] = 1;
	v->a[72162] = anon_sym_DOLLAR_LBRACE;
	v->a[72163] = actions(1646);
	v->a[72164] = 1;
	v->a[72165] = anon_sym_DOLLAR_LPAREN;
	v->a[72166] = actions(1648);
	v->a[72167] = 1;
	v->a[72168] = anon_sym_BQUOTE;
	v->a[72169] = actions(2842);
	v->a[72170] = 1;
	v->a[72171] = anon_sym_RBRACE;
	v->a[72172] = actions(2844);
	v->a[72173] = 1;
	v->a[72174] = sym_variable_name;
	v->a[72175] = actions(2846);
	v->a[72176] = 1;
	v->a[72177] = sym__expansion_word;
	v->a[72178] = state(2093);
	v->a[72179] = 1;
	small_parse_table_3609(v);
}

void	small_parse_table_3609(t_small_parse_table_array *v)
{
	v->a[72180] = sym__concatenation_in_expansion;
	v->a[72181] = actions(2840);
	v->a[72182] = 2;
	v->a[72183] = sym_raw_string;
	v->a[72184] = sym_word;
	v->a[72185] = state(1864);
	v->a[72186] = 2;
	v->a[72187] = sym_string;
	v->a[72188] = sym_expansion;
	v->a[72189] = state(1872);
	v->a[72190] = 2;
	v->a[72191] = sym_simple_expansion;
	v->a[72192] = sym_command_substitution;
	v->a[72193] = 7;
	v->a[72194] = actions(664);
	v->a[72195] = 1;
	v->a[72196] = sym_comment;
	v->a[72197] = actions(2830);
	v->a[72198] = 1;
	v->a[72199] = sym_file_descriptor;
	small_parse_table_3610(v);
}

/* EOF small_parse_table_721.c */
