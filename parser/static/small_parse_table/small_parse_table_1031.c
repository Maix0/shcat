/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1031.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5155(t_small_parse_table_array *v)
{
	v->a[103100] = 2;
	v->a[103101] = anon_sym_LT_AMP_DASH;
	v->a[103102] = anon_sym_GT_AMP_DASH;
	v->a[103103] = state(2148);
	v->a[103104] = 3;
	v->a[103105] = sym_file_redirect;
	v->a[103106] = sym_heredoc_redirect;
	v->a[103107] = aux_sym_redirected_statement_repeat1;
	v->a[103108] = actions(5165);
	v->a[103109] = 7;
	v->a[103110] = anon_sym_PIPE;
	v->a[103111] = anon_sym_SEMI_SEMI;
	v->a[103112] = anon_sym_PIPE_AMP;
	v->a[103113] = anon_sym_AMP_AMP;
	v->a[103114] = anon_sym_PIPE_PIPE;
	v->a[103115] = anon_sym_AMP;
	v->a[103116] = anon_sym_SEMI;
	v->a[103117] = actions(5935);
	v->a[103118] = 8;
	v->a[103119] = anon_sym_LT;
	small_parse_table_5156(v);
}

void	small_parse_table_5156(t_small_parse_table_array *v)
{
	v->a[103120] = anon_sym_GT;
	v->a[103121] = anon_sym_GT_GT;
	v->a[103122] = anon_sym_AMP_GT;
	v->a[103123] = anon_sym_AMP_GT_GT;
	v->a[103124] = anon_sym_LT_AMP;
	v->a[103125] = anon_sym_GT_AMP;
	v->a[103126] = anon_sym_GT_PIPE;
	v->a[103127] = 6;
	v->a[103128] = actions(3);
	v->a[103129] = 1;
	v->a[103130] = sym_comment;
	v->a[103131] = actions(5267);
	v->a[103132] = 1;
	v->a[103133] = aux_sym_concatenation_token1;
	v->a[103134] = actions(5269);
	v->a[103135] = 1;
	v->a[103136] = sym__concat;
	v->a[103137] = state(2171);
	v->a[103138] = 1;
	v->a[103139] = aux_sym_concatenation_repeat1;
	small_parse_table_5157(v);
}

void	small_parse_table_5157(t_small_parse_table_array *v)
{
	v->a[103140] = actions(2664);
	v->a[103141] = 2;
	v->a[103142] = sym_file_descriptor;
	v->a[103143] = aux_sym_heredoc_redirect_token1;
	v->a[103144] = actions(2662);
	v->a[103145] = 20;
	v->a[103146] = anon_sym_PIPE;
	v->a[103147] = anon_sym_SEMI_SEMI;
	v->a[103148] = anon_sym_PIPE_AMP;
	v->a[103149] = anon_sym_AMP_AMP;
	v->a[103150] = anon_sym_PIPE_PIPE;
	v->a[103151] = anon_sym_LT;
	v->a[103152] = anon_sym_GT;
	v->a[103153] = anon_sym_GT_GT;
	v->a[103154] = anon_sym_AMP_GT;
	v->a[103155] = anon_sym_AMP_GT_GT;
	v->a[103156] = anon_sym_LT_AMP;
	v->a[103157] = anon_sym_GT_AMP;
	v->a[103158] = anon_sym_GT_PIPE;
	v->a[103159] = anon_sym_LT_AMP_DASH;
	small_parse_table_5158(v);
}

void	small_parse_table_5158(t_small_parse_table_array *v)
{
	v->a[103160] = anon_sym_GT_AMP_DASH;
	v->a[103161] = anon_sym_LT_LT;
	v->a[103162] = anon_sym_LT_LT_DASH;
	v->a[103163] = anon_sym_AMP;
	v->a[103164] = sym__special_character;
	v->a[103165] = anon_sym_SEMI;
	v->a[103166] = 18;
	v->a[103167] = actions(57);
	v->a[103168] = 1;
	v->a[103169] = sym_comment;
	v->a[103170] = actions(4340);
	v->a[103171] = 1;
	v->a[103172] = anon_sym_DOLLAR;
	v->a[103173] = actions(4346);
	v->a[103174] = 1;
	v->a[103175] = aux_sym_number_token1;
	v->a[103176] = actions(4348);
	v->a[103177] = 1;
	v->a[103178] = aux_sym_number_token2;
	v->a[103179] = actions(4352);
	small_parse_table_5159(v);
}

void	small_parse_table_5159(t_small_parse_table_array *v)
{
	v->a[103180] = 1;
	v->a[103181] = anon_sym_DOLLAR_LPAREN;
	v->a[103182] = actions(4360);
	v->a[103183] = 1;
	v->a[103184] = sym_extglob_pattern;
	v->a[103185] = actions(4362);
	v->a[103186] = 1;
	v->a[103187] = sym__brace_start;
	v->a[103188] = actions(4550);
	v->a[103189] = 1;
	v->a[103190] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103191] = actions(4552);
	v->a[103192] = 1;
	v->a[103193] = sym__special_character;
	v->a[103194] = actions(4554);
	v->a[103195] = 1;
	v->a[103196] = anon_sym_DQUOTE;
	v->a[103197] = actions(4556);
	v->a[103198] = 1;
	v->a[103199] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5160(v);
}

/* EOF small_parse_table_1031.c */
