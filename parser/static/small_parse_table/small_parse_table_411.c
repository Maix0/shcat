/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_411.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2055(t_small_parse_table_array *v)
{
	v->a[41100] = actions(1878);
	v->a[41101] = 1;
	v->a[41102] = aux_sym_heredoc_redirect_token1;
	v->a[41103] = state(305);
	v->a[41104] = 1;
	v->a[41105] = sym_terminator;
	v->a[41106] = actions(582);
	v->a[41107] = 2;
	v->a[41108] = anon_sym_AMP_AMP;
	v->a[41109] = anon_sym_PIPE_PIPE;
	v->a[41110] = actions(591);
	v->a[41111] = 2;
	v->a[41112] = anon_sym_esac;
	v->a[41113] = anon_sym_SEMI_SEMI;
	v->a[41114] = actions(1876);
	v->a[41115] = 3;
	v->a[41116] = anon_sym_LT;
	v->a[41117] = anon_sym_GT;
	v->a[41118] = anon_sym_GT_GT;
	v->a[41119] = state(971);
	small_parse_table_2056(v);
}

void	small_parse_table_2056(t_small_parse_table_array *v)
{
	v->a[41120] = 3;
	v->a[41121] = sym_file_redirect;
	v->a[41122] = sym_heredoc_redirect;
	v->a[41123] = aux_sym_redirected_statement_repeat1;
	v->a[41124] = 3;
	v->a[41125] = actions(3);
	v->a[41126] = 1;
	v->a[41127] = sym_comment;
	v->a[41128] = actions(981);
	v->a[41129] = 2;
	v->a[41130] = sym__concat;
	v->a[41131] = sym_variable_name;
	v->a[41132] = actions(973);
	v->a[41133] = 13;
	v->a[41134] = anon_sym_LT;
	v->a[41135] = anon_sym_GT;
	v->a[41136] = anon_sym_GT_GT;
	v->a[41137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41138] = aux_sym_concatenation_token1;
	v->a[41139] = anon_sym_DOLLAR;
	small_parse_table_2057(v);
}

void	small_parse_table_2057(t_small_parse_table_array *v)
{
	v->a[41140] = anon_sym_DQUOTE;
	v->a[41141] = sym_raw_string;
	v->a[41142] = sym_number;
	v->a[41143] = anon_sym_DOLLAR_LBRACE;
	v->a[41144] = anon_sym_DOLLAR_LPAREN;
	v->a[41145] = anon_sym_BQUOTE;
	v->a[41146] = sym_word;
	v->a[41147] = 10;
	v->a[41148] = actions(3);
	v->a[41149] = 1;
	v->a[41150] = sym_comment;
	v->a[41151] = actions(580);
	v->a[41152] = 1;
	v->a[41153] = anon_sym_PIPE;
	v->a[41154] = actions(584);
	v->a[41155] = 1;
	v->a[41156] = anon_sym_LT_LT;
	v->a[41157] = actions(586);
	v->a[41158] = 1;
	v->a[41159] = anon_sym_SEMI;
	small_parse_table_2058(v);
}

void	small_parse_table_2058(t_small_parse_table_array *v)
{
	v->a[41160] = actions(1878);
	v->a[41161] = 1;
	v->a[41162] = aux_sym_heredoc_redirect_token1;
	v->a[41163] = state(303);
	v->a[41164] = 1;
	v->a[41165] = sym_terminator;
	v->a[41166] = actions(582);
	v->a[41167] = 2;
	v->a[41168] = anon_sym_AMP_AMP;
	v->a[41169] = anon_sym_PIPE_PIPE;
	v->a[41170] = actions(591);
	v->a[41171] = 2;
	v->a[41172] = anon_sym_esac;
	v->a[41173] = anon_sym_SEMI_SEMI;
	v->a[41174] = actions(1876);
	v->a[41175] = 3;
	v->a[41176] = anon_sym_LT;
	v->a[41177] = anon_sym_GT;
	v->a[41178] = anon_sym_GT_GT;
	v->a[41179] = state(971);
	small_parse_table_2059(v);
}

void	small_parse_table_2059(t_small_parse_table_array *v)
{
	v->a[41180] = 3;
	v->a[41181] = sym_file_redirect;
	v->a[41182] = sym_heredoc_redirect;
	v->a[41183] = aux_sym_redirected_statement_repeat1;
	v->a[41184] = 3;
	v->a[41185] = actions(3);
	v->a[41186] = 1;
	v->a[41187] = sym_comment;
	v->a[41188] = actions(1093);
	v->a[41189] = 2;
	v->a[41190] = sym__concat;
	v->a[41191] = sym_variable_name;
	v->a[41192] = actions(1091);
	v->a[41193] = 13;
	v->a[41194] = anon_sym_LT;
	v->a[41195] = anon_sym_GT;
	v->a[41196] = anon_sym_GT_GT;
	v->a[41197] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41198] = aux_sym_concatenation_token1;
	v->a[41199] = anon_sym_DOLLAR;
	small_parse_table_2060(v);
}

/* EOF small_parse_table_411.c */
