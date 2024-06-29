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
	v->a[72100] = sym_number;
	v->a[72101] = anon_sym_DOLLAR_LBRACE;
	v->a[72102] = anon_sym_DOLLAR_LPAREN;
	v->a[72103] = anon_sym_BQUOTE;
	v->a[72104] = sym_word;
	v->a[72105] = 7;
	v->a[72106] = actions(3);
	v->a[72107] = 1;
	v->a[72108] = sym_comment;
	v->a[72109] = actions(2275);
	v->a[72110] = 1;
	v->a[72111] = sym_file_descriptor;
	v->a[72112] = actions(2352);
	v->a[72113] = 1;
	v->a[72114] = aux_sym_heredoc_redirect_token1;
	v->a[72115] = actions(2029);
	v->a[72116] = 2;
	v->a[72117] = anon_sym_LT_AMP_DASH;
	v->a[72118] = anon_sym_GT_AMP_DASH;
	v->a[72119] = state(1184);
	small_parse_table_3606(v);
}

void	small_parse_table_3606(t_small_parse_table_array *v)
{
	v->a[72120] = 2;
	v->a[72121] = sym_file_redirect;
	v->a[72122] = aux_sym_redirected_statement_repeat2;
	v->a[72123] = actions(2027);
	v->a[72124] = 8;
	v->a[72125] = anon_sym_LT;
	v->a[72126] = anon_sym_GT;
	v->a[72127] = anon_sym_GT_GT;
	v->a[72128] = anon_sym_AMP_GT;
	v->a[72129] = anon_sym_AMP_GT_GT;
	v->a[72130] = anon_sym_LT_AMP;
	v->a[72131] = anon_sym_GT_AMP;
	v->a[72132] = anon_sym_GT_PIPE;
	v->a[72133] = actions(2350);
	v->a[72134] = 9;
	v->a[72135] = anon_sym_PIPE;
	v->a[72136] = anon_sym_SEMI_SEMI;
	v->a[72137] = anon_sym_AMP_AMP;
	v->a[72138] = anon_sym_PIPE_PIPE;
	v->a[72139] = anon_sym_LT_LT;
	small_parse_table_3607(v);
}

void	small_parse_table_3607(t_small_parse_table_array *v)
{
	v->a[72140] = anon_sym_LT_LT_DASH;
	v->a[72141] = anon_sym_AMP;
	v->a[72142] = anon_sym_BQUOTE;
	v->a[72143] = anon_sym_SEMI;
	v->a[72144] = 3;
	v->a[72145] = actions(3);
	v->a[72146] = 1;
	v->a[72147] = sym_comment;
	v->a[72148] = actions(1592);
	v->a[72149] = 3;
	v->a[72150] = sym_file_descriptor;
	v->a[72151] = ts_builtin_sym_end;
	v->a[72152] = aux_sym_heredoc_redirect_token1;
	v->a[72153] = actions(1594);
	v->a[72154] = 20;
	v->a[72155] = anon_sym_PIPE;
	v->a[72156] = anon_sym_RPAREN;
	v->a[72157] = anon_sym_SEMI_SEMI;
	v->a[72158] = anon_sym_AMP_AMP;
	v->a[72159] = anon_sym_PIPE_PIPE;
	small_parse_table_3608(v);
}

void	small_parse_table_3608(t_small_parse_table_array *v)
{
	v->a[72160] = anon_sym_LT;
	v->a[72161] = anon_sym_GT;
	v->a[72162] = anon_sym_GT_GT;
	v->a[72163] = anon_sym_AMP_GT;
	v->a[72164] = anon_sym_AMP_GT_GT;
	v->a[72165] = anon_sym_LT_AMP;
	v->a[72166] = anon_sym_GT_AMP;
	v->a[72167] = anon_sym_GT_PIPE;
	v->a[72168] = anon_sym_LT_AMP_DASH;
	v->a[72169] = anon_sym_GT_AMP_DASH;
	v->a[72170] = anon_sym_LT_LT;
	v->a[72171] = anon_sym_LT_LT_DASH;
	v->a[72172] = anon_sym_AMP;
	v->a[72173] = anon_sym_BQUOTE;
	v->a[72174] = anon_sym_SEMI;
	v->a[72175] = 16;
	v->a[72176] = actions(3);
	v->a[72177] = 1;
	v->a[72178] = sym_comment;
	v->a[72179] = actions(1879);
	small_parse_table_3609(v);
}

void	small_parse_table_3609(t_small_parse_table_array *v)
{
	v->a[72180] = 1;
	v->a[72181] = anon_sym_LPAREN;
	v->a[72182] = actions(1883);
	v->a[72183] = 1;
	v->a[72184] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72185] = actions(1885);
	v->a[72186] = 1;
	v->a[72187] = anon_sym_DOLLAR;
	v->a[72188] = actions(1887);
	v->a[72189] = 1;
	v->a[72190] = anon_sym_DQUOTE;
	v->a[72191] = actions(1889);
	v->a[72192] = 1;
	v->a[72193] = anon_sym_DOLLAR_LBRACE;
	v->a[72194] = actions(1891);
	v->a[72195] = 1;
	v->a[72196] = anon_sym_DOLLAR_LPAREN;
	v->a[72197] = actions(1893);
	v->a[72198] = 1;
	v->a[72199] = anon_sym_BQUOTE;
	small_parse_table_3610(v);
}

/* EOF small_parse_table_721.c */
