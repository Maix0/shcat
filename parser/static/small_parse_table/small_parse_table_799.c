/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_799.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3995(t_small_parse_table_array *v)
{
	v->a[79900] = sym_arithmetic_expansion;
	v->a[79901] = sym_string;
	v->a[79902] = sym_simple_expansion;
	v->a[79903] = sym_expansion;
	v->a[79904] = sym_command_substitution;
	v->a[79905] = 10;
	v->a[79906] = actions(3);
	v->a[79907] = 1;
	v->a[79908] = sym_comment;
	v->a[79909] = actions(1483);
	v->a[79910] = 1;
	v->a[79911] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79912] = actions(1487);
	v->a[79913] = 1;
	v->a[79914] = anon_sym_DQUOTE;
	v->a[79915] = actions(1489);
	v->a[79916] = 1;
	v->a[79917] = anon_sym_DOLLAR_LBRACE;
	v->a[79918] = actions(1491);
	v->a[79919] = 1;
	small_parse_table_3996(v);
}

void	small_parse_table_3996(t_small_parse_table_array *v)
{
	v->a[79920] = anon_sym_DOLLAR_LPAREN;
	v->a[79921] = actions(1493);
	v->a[79922] = 1;
	v->a[79923] = anon_sym_BQUOTE;
	v->a[79924] = actions(2961);
	v->a[79925] = 1;
	v->a[79926] = anon_sym_DOLLAR;
	v->a[79927] = actions(2963);
	v->a[79928] = 1;
	v->a[79929] = sym__bare_dollar;
	v->a[79930] = actions(2959);
	v->a[79931] = 5;
	v->a[79932] = aux_sym_concatenation_token1;
	v->a[79933] = sym_raw_string;
	v->a[79934] = sym_number;
	v->a[79935] = sym__comment_word;
	v->a[79936] = sym_word;
	v->a[79937] = state(923);
	v->a[79938] = 5;
	v->a[79939] = sym_arithmetic_expansion;
	small_parse_table_3997(v);
}

void	small_parse_table_3997(t_small_parse_table_array *v)
{
	v->a[79940] = sym_string;
	v->a[79941] = sym_simple_expansion;
	v->a[79942] = sym_expansion;
	v->a[79943] = sym_command_substitution;
	v->a[79944] = 10;
	v->a[79945] = actions(3);
	v->a[79946] = 1;
	v->a[79947] = sym_comment;
	v->a[79948] = actions(813);
	v->a[79949] = 1;
	v->a[79950] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79951] = actions(815);
	v->a[79952] = 1;
	v->a[79953] = anon_sym_DOLLAR;
	v->a[79954] = actions(817);
	v->a[79955] = 1;
	v->a[79956] = anon_sym_DQUOTE;
	v->a[79957] = actions(819);
	v->a[79958] = 1;
	v->a[79959] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3998(v);
}

void	small_parse_table_3998(t_small_parse_table_array *v)
{
	v->a[79960] = actions(821);
	v->a[79961] = 1;
	v->a[79962] = anon_sym_DOLLAR_LPAREN;
	v->a[79963] = actions(823);
	v->a[79964] = 1;
	v->a[79965] = anon_sym_BQUOTE;
	v->a[79966] = actions(2877);
	v->a[79967] = 1;
	v->a[79968] = sym__bare_dollar;
	v->a[79969] = actions(2873);
	v->a[79970] = 5;
	v->a[79971] = aux_sym_concatenation_token1;
	v->a[79972] = sym_raw_string;
	v->a[79973] = sym_number;
	v->a[79974] = sym__comment_word;
	v->a[79975] = sym_word;
	v->a[79976] = state(607);
	v->a[79977] = 5;
	v->a[79978] = sym_arithmetic_expansion;
	v->a[79979] = sym_string;
	small_parse_table_3999(v);
}

void	small_parse_table_3999(t_small_parse_table_array *v)
{
	v->a[79980] = sym_simple_expansion;
	v->a[79981] = sym_expansion;
	v->a[79982] = sym_command_substitution;
	v->a[79983] = 10;
	v->a[79984] = actions(3);
	v->a[79985] = 1;
	v->a[79986] = sym_comment;
	v->a[79987] = actions(904);
	v->a[79988] = 1;
	v->a[79989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79990] = actions(908);
	v->a[79991] = 1;
	v->a[79992] = anon_sym_DQUOTE;
	v->a[79993] = actions(910);
	v->a[79994] = 1;
	v->a[79995] = anon_sym_DOLLAR_LBRACE;
	v->a[79996] = actions(912);
	v->a[79997] = 1;
	v->a[79998] = anon_sym_DOLLAR_LPAREN;
	v->a[79999] = actions(914);
	small_parse_table_4000(v);
}

/* EOF small_parse_table_799.c */
