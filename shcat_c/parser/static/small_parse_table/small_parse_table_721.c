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
	v->a[72100] = 38;
	v->a[72101] = anon_sym_LPAREN_LPAREN;
	v->a[72102] = anon_sym_SEMI;
	v->a[72103] = anon_sym_PIPE_PIPE;
	v->a[72104] = anon_sym_AMP_AMP;
	v->a[72105] = anon_sym_PIPE;
	v->a[72106] = anon_sym_AMP;
	v->a[72107] = anon_sym_LT;
	v->a[72108] = anon_sym_GT;
	v->a[72109] = anon_sym_LT_LT;
	v->a[72110] = anon_sym_GT_GT;
	v->a[72111] = anon_sym_SEMI_SEMI;
	v->a[72112] = anon_sym_PIPE_AMP;
	v->a[72113] = anon_sym_AMP_GT;
	v->a[72114] = anon_sym_AMP_GT_GT;
	v->a[72115] = anon_sym_LT_AMP;
	v->a[72116] = anon_sym_GT_AMP;
	v->a[72117] = anon_sym_GT_PIPE;
	v->a[72118] = anon_sym_LT_AMP_DASH;
	v->a[72119] = anon_sym_GT_AMP_DASH;
	small_parse_table_3606(v);
}

void	small_parse_table_3606(t_small_parse_table_array *v)
{
	v->a[72120] = anon_sym_LT_LT_DASH;
	v->a[72121] = anon_sym_LT_LT_LT;
	v->a[72122] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72123] = anon_sym_DOLLAR_LBRACK;
	v->a[72124] = aux_sym_concatenation_token1;
	v->a[72125] = anon_sym_DOLLAR;
	v->a[72126] = sym__special_character;
	v->a[72127] = anon_sym_DQUOTE;
	v->a[72128] = sym_raw_string;
	v->a[72129] = sym_ansi_c_string;
	v->a[72130] = aux_sym_number_token1;
	v->a[72131] = aux_sym_number_token2;
	v->a[72132] = anon_sym_DOLLAR_LBRACE;
	v->a[72133] = anon_sym_DOLLAR_LPAREN;
	v->a[72134] = anon_sym_BQUOTE;
	v->a[72135] = anon_sym_DOLLAR_BQUOTE;
	v->a[72136] = anon_sym_LT_LPAREN;
	v->a[72137] = anon_sym_GT_LPAREN;
	v->a[72138] = sym_word;
	v->a[72139] = 3;
	small_parse_table_3607(v);
}

void	small_parse_table_3607(t_small_parse_table_array *v)
{
	v->a[72140] = actions(3);
	v->a[72141] = 1;
	v->a[72142] = sym_comment;
	v->a[72143] = actions(1314);
	v->a[72144] = 7;
	v->a[72145] = sym_file_descriptor;
	v->a[72146] = sym__concat;
	v->a[72147] = sym_variable_name;
	v->a[72148] = sym_test_operator;
	v->a[72149] = sym__brace_start;
	v->a[72150] = ts_builtin_sym_end;
	v->a[72151] = aux_sym_heredoc_redirect_token1;
	v->a[72152] = actions(1312);
	v->a[72153] = 38;
	v->a[72154] = anon_sym_LPAREN_LPAREN;
	v->a[72155] = anon_sym_SEMI;
	v->a[72156] = anon_sym_PIPE_PIPE;
	v->a[72157] = anon_sym_AMP_AMP;
	v->a[72158] = anon_sym_PIPE;
	v->a[72159] = anon_sym_AMP;
	small_parse_table_3608(v);
}

void	small_parse_table_3608(t_small_parse_table_array *v)
{
	v->a[72160] = anon_sym_LT;
	v->a[72161] = anon_sym_GT;
	v->a[72162] = anon_sym_LT_LT;
	v->a[72163] = anon_sym_GT_GT;
	v->a[72164] = anon_sym_SEMI_SEMI;
	v->a[72165] = anon_sym_PIPE_AMP;
	v->a[72166] = anon_sym_AMP_GT;
	v->a[72167] = anon_sym_AMP_GT_GT;
	v->a[72168] = anon_sym_LT_AMP;
	v->a[72169] = anon_sym_GT_AMP;
	v->a[72170] = anon_sym_GT_PIPE;
	v->a[72171] = anon_sym_LT_AMP_DASH;
	v->a[72172] = anon_sym_GT_AMP_DASH;
	v->a[72173] = anon_sym_LT_LT_DASH;
	v->a[72174] = anon_sym_LT_LT_LT;
	v->a[72175] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72176] = anon_sym_DOLLAR_LBRACK;
	v->a[72177] = aux_sym_concatenation_token1;
	v->a[72178] = anon_sym_DOLLAR;
	v->a[72179] = sym__special_character;
	small_parse_table_3609(v);
}

void	small_parse_table_3609(t_small_parse_table_array *v)
{
	v->a[72180] = anon_sym_DQUOTE;
	v->a[72181] = sym_raw_string;
	v->a[72182] = sym_ansi_c_string;
	v->a[72183] = aux_sym_number_token1;
	v->a[72184] = aux_sym_number_token2;
	v->a[72185] = anon_sym_DOLLAR_LBRACE;
	v->a[72186] = anon_sym_DOLLAR_LPAREN;
	v->a[72187] = anon_sym_BQUOTE;
	v->a[72188] = anon_sym_DOLLAR_BQUOTE;
	v->a[72189] = anon_sym_LT_LPAREN;
	v->a[72190] = anon_sym_GT_LPAREN;
	v->a[72191] = sym_word;
	v->a[72192] = 3;
	v->a[72193] = actions(3);
	v->a[72194] = 1;
	v->a[72195] = sym_comment;
	v->a[72196] = actions(1342);
	v->a[72197] = 7;
	v->a[72198] = sym_file_descriptor;
	v->a[72199] = sym__concat;
	small_parse_table_3610(v);
}

/* EOF small_parse_table_721.c */
