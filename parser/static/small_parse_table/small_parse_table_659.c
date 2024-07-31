/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_659.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3295(t_small_parse_table_array *v)
{
	v->a[65900] = anon_sym_DQUOTE;
	v->a[65901] = sym_string_content;
	v->a[65902] = anon_sym_DOLLAR_LBRACE;
	v->a[65903] = anon_sym_DOLLAR_LPAREN;
	v->a[65904] = anon_sym_BQUOTE;
	v->a[65905] = 2;
	v->a[65906] = actions(3);
	v->a[65907] = 1;
	v->a[65908] = sym_comment;
	v->a[65909] = actions(2753);
	v->a[65910] = 7;
	v->a[65911] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65912] = anon_sym_DOLLAR;
	v->a[65913] = anon_sym_DQUOTE;
	v->a[65914] = sym_string_content;
	v->a[65915] = anon_sym_DOLLAR_LBRACE;
	v->a[65916] = anon_sym_DOLLAR_LPAREN;
	v->a[65917] = anon_sym_BQUOTE;
	v->a[65918] = 2;
	v->a[65919] = actions(3);
	small_parse_table_3296(v);
}

void	small_parse_table_3296(t_small_parse_table_array *v)
{
	v->a[65920] = 1;
	v->a[65921] = sym_comment;
	v->a[65922] = actions(2979);
	v->a[65923] = 7;
	v->a[65924] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65925] = anon_sym_DOLLAR;
	v->a[65926] = anon_sym_DQUOTE;
	v->a[65927] = sym_string_content;
	v->a[65928] = anon_sym_DOLLAR_LBRACE;
	v->a[65929] = anon_sym_DOLLAR_LPAREN;
	v->a[65930] = anon_sym_BQUOTE;
	v->a[65931] = 6;
	v->a[65932] = actions(3);
	v->a[65933] = 1;
	v->a[65934] = sym_comment;
	v->a[65935] = actions(1001);
	v->a[65936] = 1;
	v->a[65937] = aux_sym_heredoc_redirect_token1;
	v->a[65938] = actions(2940);
	v->a[65939] = 1;
	small_parse_table_3297(v);
}

void	small_parse_table_3297(t_small_parse_table_array *v)
{
	v->a[65940] = aux_sym_concatenation_token1;
	v->a[65941] = actions(2981);
	v->a[65942] = 1;
	v->a[65943] = sym__concat;
	v->a[65944] = state(1488);
	v->a[65945] = 1;
	v->a[65946] = aux_sym_concatenation_repeat1;
	v->a[65947] = actions(997);
	v->a[65948] = 3;
	v->a[65949] = anon_sym_in;
	v->a[65950] = anon_sym_SEMI_SEMI;
	v->a[65951] = anon_sym_SEMI;
	v->a[65952] = 6;
	v->a[65953] = actions(3);
	v->a[65954] = 1;
	v->a[65955] = sym_comment;
	v->a[65956] = actions(1011);
	v->a[65957] = 1;
	v->a[65958] = aux_sym_heredoc_redirect_token1;
	v->a[65959] = actions(2983);
	small_parse_table_3298(v);
}

void	small_parse_table_3298(t_small_parse_table_array *v)
{
	v->a[65960] = 1;
	v->a[65961] = aux_sym_concatenation_token1;
	v->a[65962] = actions(2986);
	v->a[65963] = 1;
	v->a[65964] = sym__concat;
	v->a[65965] = state(1488);
	v->a[65966] = 1;
	v->a[65967] = aux_sym_concatenation_repeat1;
	v->a[65968] = actions(1003);
	v->a[65969] = 3;
	v->a[65970] = anon_sym_in;
	v->a[65971] = anon_sym_SEMI_SEMI;
	v->a[65972] = anon_sym_SEMI;
	v->a[65973] = 6;
	v->a[65974] = actions(407);
	v->a[65975] = 1;
	v->a[65976] = sym_comment;
	v->a[65977] = actions(2989);
	v->a[65978] = 1;
	v->a[65979] = anon_sym_fi;
	small_parse_table_3299(v);
}

void	small_parse_table_3299(t_small_parse_table_array *v)
{
	v->a[65980] = actions(2991);
	v->a[65981] = 1;
	v->a[65982] = anon_sym_elif;
	v->a[65983] = actions(2993);
	v->a[65984] = 1;
	v->a[65985] = anon_sym_else;
	v->a[65986] = state(1774);
	v->a[65987] = 1;
	v->a[65988] = sym_else_clause;
	v->a[65989] = state(1529);
	v->a[65990] = 2;
	v->a[65991] = sym_elif_clause;
	v->a[65992] = aux_sym_if_statement_repeat1;
	v->a[65993] = 3;
	v->a[65994] = actions(3);
	v->a[65995] = 1;
	v->a[65996] = sym_comment;
	v->a[65997] = actions(449);
	v->a[65998] = 2;
	v->a[65999] = sym_regex;
	small_parse_table_3300(v);
}

/* EOF small_parse_table_659.c */
